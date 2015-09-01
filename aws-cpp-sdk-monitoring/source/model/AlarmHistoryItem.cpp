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
#include <aws/monitoring/model/AlarmHistoryItem.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

AlarmHistoryItem::AlarmHistoryItem() : 
    m_alarmNameHasBeenSet(false),
    m_timestamp(0.0),
    m_timestampHasBeenSet(false),
    m_historyItemTypeHasBeenSet(false),
    m_historySummaryHasBeenSet(false),
    m_historyDataHasBeenSet(false)
{
}

AlarmHistoryItem::AlarmHistoryItem(const XmlNode& xmlNode) : 
    m_alarmNameHasBeenSet(false),
    m_timestamp(0.0),
    m_timestampHasBeenSet(false),
    m_historyItemTypeHasBeenSet(false),
    m_historySummaryHasBeenSet(false),
    m_historyDataHasBeenSet(false)
{
  *this = xmlNode;
}

AlarmHistoryItem& AlarmHistoryItem::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode alarmNameNode = resultNode.FirstChild("AlarmName");
    if(alarmNameNode.IsNull())
    {
      alarmNameNode = resultNode;
    }

    if(!alarmNameNode.IsNull())
    {
      m_alarmName = StringUtils::Trim(alarmNameNode.GetText().c_str());
      m_alarmNameHasBeenSet = true;
    }
    XmlNode timestampNode = resultNode.FirstChild("Timestamp");
    if(timestampNode.IsNull())
    {
      timestampNode = resultNode;
    }

    if(!timestampNode.IsNull())
    {
      m_timestamp = StringUtils::ConvertToDouble(StringUtils::Trim(timestampNode.GetText().c_str()).c_str());
      m_timestampHasBeenSet = true;
    }
    XmlNode historyItemTypeNode = resultNode.FirstChild("HistoryItemType");
    if(historyItemTypeNode.IsNull())
    {
      historyItemTypeNode = resultNode;
    }

    if(!historyItemTypeNode.IsNull())
    {
      m_historyItemType = HistoryItemTypeMapper::GetHistoryItemTypeForName(StringUtils::Trim(historyItemTypeNode.GetText().c_str()).c_str());
      m_historyItemTypeHasBeenSet = true;
    }
    XmlNode historySummaryNode = resultNode.FirstChild("HistorySummary");
    if(historySummaryNode.IsNull())
    {
      historySummaryNode = resultNode;
    }

    if(!historySummaryNode.IsNull())
    {
      m_historySummary = StringUtils::Trim(historySummaryNode.GetText().c_str());
      m_historySummaryHasBeenSet = true;
    }
    XmlNode historyDataNode = resultNode.FirstChild("HistoryData");
    if(historyDataNode.IsNull())
    {
      historyDataNode = resultNode;
    }

    if(!historyDataNode.IsNull())
    {
      m_historyData = StringUtils::Trim(historyDataNode.GetText().c_str());
      m_historyDataHasBeenSet = true;
    }
  }

  return *this;
}

void AlarmHistoryItem::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_alarmNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".AlarmName=" << StringUtils::URLEncode(m_alarmName.c_str()) << "&";
  }
  if(m_timestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".Timestamp=" << m_timestamp << "&";
  }
  if(m_historyItemTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".HistoryItemType=" << HistoryItemTypeMapper::GetNameForHistoryItemType(m_historyItemType) << "&";
  }
  if(m_historySummaryHasBeenSet)
  {
      oStream << location << index << locationValue << ".HistorySummary=" << StringUtils::URLEncode(m_historySummary.c_str()) << "&";
  }
  if(m_historyDataHasBeenSet)
  {
      oStream << location << index << locationValue << ".HistoryData=" << StringUtils::URLEncode(m_historyData.c_str()) << "&";
  }
}

void AlarmHistoryItem::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_alarmNameHasBeenSet)
  {
      oStream << location << ".AlarmName=" << StringUtils::URLEncode(m_alarmName.c_str()) << "&";
  }
  if(m_timestampHasBeenSet)
  {
      oStream << location << ".Timestamp=" << m_timestamp << "&";
  }
  if(m_historyItemTypeHasBeenSet)
  {
      oStream << location << ".HistoryItemType=" << HistoryItemTypeMapper::GetNameForHistoryItemType(m_historyItemType) << "&";
  }
  if(m_historySummaryHasBeenSet)
  {
      oStream << location << ".HistorySummary=" << StringUtils::URLEncode(m_historySummary.c_str()) << "&";
  }
  if(m_historyDataHasBeenSet)
  {
      oStream << location << ".HistoryData=" << StringUtils::URLEncode(m_historyData.c_str()) << "&";
  }
}
