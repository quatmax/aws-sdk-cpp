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
#include <aws/s3/model/Bucket.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Bucket::Bucket() : 
    m_nameHasBeenSet(false),
    m_creationDate(0.0),
    m_creationDateHasBeenSet(false)
{
}

Bucket::Bucket(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_creationDate(0.0),
    m_creationDateHasBeenSet(false)
{
  *this = xmlNode;
}

Bucket& Bucket::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(nameNode.IsNull())
    {
      nameNode = resultNode;
    }

    if(!nameNode.IsNull())
    {
      m_name = StringUtils::Trim(nameNode.GetText().c_str());
      m_nameHasBeenSet = true;
    }
    XmlNode creationDateNode = resultNode.FirstChild("CreationDate");
    if(creationDateNode.IsNull())
    {
      creationDateNode = resultNode;
    }

    if(!creationDateNode.IsNull())
    {
      m_creationDate = StringUtils::ConvertToDouble(StringUtils::Trim(creationDateNode.GetText().c_str()).c_str());
      m_creationDateHasBeenSet = true;
    }
  }

  return *this;
}

void Bucket::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

  if(m_creationDateHasBeenSet)
  {
   XmlNode creationDateNode = parentNode.CreateChildElement("CreationDate");
  ss << m_creationDate;
   creationDateNode.SetText(ss.str());
  ss.str("");
  }

}
