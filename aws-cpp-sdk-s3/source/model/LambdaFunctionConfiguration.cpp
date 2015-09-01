/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/s3/model/LambdaFunctionConfiguration.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

LambdaFunctionConfiguration::LambdaFunctionConfiguration() : 
    m_idHasBeenSet(false),
    m_lambdaFunctionArnHasBeenSet(false),
    m_eventsHasBeenSet(false),
    m_filterHasBeenSet(false)
{
}

LambdaFunctionConfiguration::LambdaFunctionConfiguration(const XmlNode& xmlNode) : 
    m_idHasBeenSet(false),
    m_lambdaFunctionArnHasBeenSet(false),
    m_eventsHasBeenSet(false),
    m_filterHasBeenSet(false)
{
  *this = xmlNode;
}

LambdaFunctionConfiguration& LambdaFunctionConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode idNode = resultNode.FirstChild("Id");
    if(idNode.IsNull())
    {
      idNode = resultNode;
    }

    if(!idNode.IsNull())
    {
      m_id = StringUtils::Trim(idNode.GetText().c_str());
      m_idHasBeenSet = true;
    }
    XmlNode lambdaFunctionArnNode = resultNode.FirstChild("LambdaFunctionArn");
    if(lambdaFunctionArnNode.IsNull())
    {
      lambdaFunctionArnNode = resultNode;
    }

    if(!lambdaFunctionArnNode.IsNull())
    {
      m_lambdaFunctionArn = StringUtils::Trim(lambdaFunctionArnNode.GetText().c_str());
      m_lambdaFunctionArnHasBeenSet = true;
    }
    XmlNode eventsNode = resultNode.FirstChild("Events");
    if(!eventsNode.IsNull())
    {
      XmlNode eventsMember = eventsNode;
      while(!eventsMember.IsNull())
      {
        m_events.push_back(EventMapper::GetEventForName(StringUtils::Trim(eventsMember.GetText().c_str())));
        eventsMember = eventsMember.NextNode("Event");
      }

      m_eventsHasBeenSet = true;
    }
    XmlNode filterNode = resultNode.FirstChild("Filter");
    if(filterNode.IsNull())
    {
      filterNode = resultNode;
    }

    if(!filterNode.IsNull())
    {
      m_filter = filterNode;
      m_filterHasBeenSet = true;
    }
  }

  return *this;
}

void LambdaFunctionConfiguration::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_idHasBeenSet)
  {
   XmlNode idNode = parentNode.CreateChildElement("Id");
   idNode.SetText(m_id);
  }

  if(m_lambdaFunctionArnHasBeenSet)
  {
   XmlNode lambdaFunctionArnNode = parentNode.CreateChildElement("LambdaFunctionArn");
   lambdaFunctionArnNode.SetText(m_lambdaFunctionArn);
  }

  if(m_eventsHasBeenSet)
  {
   for(const auto& item : m_events)
   {
     XmlNode eventsNode = parentNode.CreateChildElement("Event");
     eventsNode.SetText(EventMapper::GetNameForEvent(item));
   }
  }

  if(m_filterHasBeenSet)
  {
   XmlNode filterNode = parentNode.CreateChildElement("Event");
   m_filter.AddToNode(filterNode);
  }

}
