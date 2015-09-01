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
#include <aws/rds/model/ReservedDBInstance.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RDS::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

ReservedDBInstance::ReservedDBInstance() : 
    m_reservedDBInstanceIdHasBeenSet(false),
    m_reservedDBInstancesOfferingIdHasBeenSet(false),
    m_dBInstanceClassHasBeenSet(false),
    m_startTime(0.0),
    m_startTimeHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_fixedPrice(0.0),
    m_fixedPriceHasBeenSet(false),
    m_usagePrice(0.0),
    m_usagePriceHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_dBInstanceCount(0),
    m_dBInstanceCountHasBeenSet(false),
    m_productDescriptionHasBeenSet(false),
    m_offeringTypeHasBeenSet(false),
    m_multiAZ(false),
    m_multiAZHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_recurringChargesHasBeenSet(false)
{
}

ReservedDBInstance::ReservedDBInstance(const XmlNode& xmlNode) : 
    m_reservedDBInstanceIdHasBeenSet(false),
    m_reservedDBInstancesOfferingIdHasBeenSet(false),
    m_dBInstanceClassHasBeenSet(false),
    m_startTime(0.0),
    m_startTimeHasBeenSet(false),
    m_duration(0),
    m_durationHasBeenSet(false),
    m_fixedPrice(0.0),
    m_fixedPriceHasBeenSet(false),
    m_usagePrice(0.0),
    m_usagePriceHasBeenSet(false),
    m_currencyCodeHasBeenSet(false),
    m_dBInstanceCount(0),
    m_dBInstanceCountHasBeenSet(false),
    m_productDescriptionHasBeenSet(false),
    m_offeringTypeHasBeenSet(false),
    m_multiAZ(false),
    m_multiAZHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_recurringChargesHasBeenSet(false)
{
  *this = xmlNode;
}

ReservedDBInstance& ReservedDBInstance::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode reservedDBInstanceIdNode = resultNode.FirstChild("ReservedDBInstanceId");
    if(reservedDBInstanceIdNode.IsNull())
    {
      reservedDBInstanceIdNode = resultNode;
    }

    if(!reservedDBInstanceIdNode.IsNull())
    {
      m_reservedDBInstanceId = StringUtils::Trim(reservedDBInstanceIdNode.GetText().c_str());
      m_reservedDBInstanceIdHasBeenSet = true;
    }
    XmlNode reservedDBInstancesOfferingIdNode = resultNode.FirstChild("ReservedDBInstancesOfferingId");
    if(reservedDBInstancesOfferingIdNode.IsNull())
    {
      reservedDBInstancesOfferingIdNode = resultNode;
    }

    if(!reservedDBInstancesOfferingIdNode.IsNull())
    {
      m_reservedDBInstancesOfferingId = StringUtils::Trim(reservedDBInstancesOfferingIdNode.GetText().c_str());
      m_reservedDBInstancesOfferingIdHasBeenSet = true;
    }
    XmlNode dBInstanceClassNode = resultNode.FirstChild("DBInstanceClass");
    if(dBInstanceClassNode.IsNull())
    {
      dBInstanceClassNode = resultNode;
    }

    if(!dBInstanceClassNode.IsNull())
    {
      m_dBInstanceClass = StringUtils::Trim(dBInstanceClassNode.GetText().c_str());
      m_dBInstanceClassHasBeenSet = true;
    }
    XmlNode startTimeNode = resultNode.FirstChild("StartTime");
    if(startTimeNode.IsNull())
    {
      startTimeNode = resultNode;
    }

    if(!startTimeNode.IsNull())
    {
      m_startTime = StringUtils::ConvertToDouble(StringUtils::Trim(startTimeNode.GetText().c_str()).c_str());
      m_startTimeHasBeenSet = true;
    }
    XmlNode durationNode = resultNode.FirstChild("Duration");
    if(durationNode.IsNull())
    {
      durationNode = resultNode;
    }

    if(!durationNode.IsNull())
    {
      m_duration = StringUtils::ConvertToInt32(StringUtils::Trim(durationNode.GetText().c_str()).c_str());
      m_durationHasBeenSet = true;
    }
    XmlNode fixedPriceNode = resultNode.FirstChild("FixedPrice");
    if(fixedPriceNode.IsNull())
    {
      fixedPriceNode = resultNode;
    }

    if(!fixedPriceNode.IsNull())
    {
      m_fixedPrice = StringUtils::ConvertToDouble(StringUtils::Trim(fixedPriceNode.GetText().c_str()).c_str());
      m_fixedPriceHasBeenSet = true;
    }
    XmlNode usagePriceNode = resultNode.FirstChild("UsagePrice");
    if(usagePriceNode.IsNull())
    {
      usagePriceNode = resultNode;
    }

    if(!usagePriceNode.IsNull())
    {
      m_usagePrice = StringUtils::ConvertToDouble(StringUtils::Trim(usagePriceNode.GetText().c_str()).c_str());
      m_usagePriceHasBeenSet = true;
    }
    XmlNode currencyCodeNode = resultNode.FirstChild("CurrencyCode");
    if(currencyCodeNode.IsNull())
    {
      currencyCodeNode = resultNode;
    }

    if(!currencyCodeNode.IsNull())
    {
      m_currencyCode = StringUtils::Trim(currencyCodeNode.GetText().c_str());
      m_currencyCodeHasBeenSet = true;
    }
    XmlNode dBInstanceCountNode = resultNode.FirstChild("DBInstanceCount");
    if(dBInstanceCountNode.IsNull())
    {
      dBInstanceCountNode = resultNode;
    }

    if(!dBInstanceCountNode.IsNull())
    {
      m_dBInstanceCount = StringUtils::ConvertToInt32(StringUtils::Trim(dBInstanceCountNode.GetText().c_str()).c_str());
      m_dBInstanceCountHasBeenSet = true;
    }
    XmlNode productDescriptionNode = resultNode.FirstChild("ProductDescription");
    if(productDescriptionNode.IsNull())
    {
      productDescriptionNode = resultNode;
    }

    if(!productDescriptionNode.IsNull())
    {
      m_productDescription = StringUtils::Trim(productDescriptionNode.GetText().c_str());
      m_productDescriptionHasBeenSet = true;
    }
    XmlNode offeringTypeNode = resultNode.FirstChild("OfferingType");
    if(offeringTypeNode.IsNull())
    {
      offeringTypeNode = resultNode;
    }

    if(!offeringTypeNode.IsNull())
    {
      m_offeringType = StringUtils::Trim(offeringTypeNode.GetText().c_str());
      m_offeringTypeHasBeenSet = true;
    }
    XmlNode multiAZNode = resultNode.FirstChild("MultiAZ");
    if(multiAZNode.IsNull())
    {
      multiAZNode = resultNode;
    }

    if(!multiAZNode.IsNull())
    {
      m_multiAZ = StringUtils::ConvertToBool(StringUtils::Trim(multiAZNode.GetText().c_str()).c_str());
      m_multiAZHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("State");
    if(stateNode.IsNull())
    {
      stateNode = resultNode;
    }

    if(!stateNode.IsNull())
    {
      m_state = StringUtils::Trim(stateNode.GetText().c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode recurringChargesNode = resultNode.FirstChild("RecurringCharges");
    if(!recurringChargesNode.IsNull())
    {
      XmlNode recurringChargesMember = recurringChargesNode.FirstChild("RecurringCharge");
      while(!recurringChargesMember.IsNull())
      {
        m_recurringCharges.push_back(recurringChargesMember);
        recurringChargesMember = recurringChargesMember.NextNode("RecurringCharge");
      }

      m_recurringChargesHasBeenSet = true;
    }
  }

  return *this;
}

void ReservedDBInstance::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_reservedDBInstanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReservedDBInstanceId=" << StringUtils::URLEncode(m_reservedDBInstanceId.c_str()) << "&";
  }
  if(m_reservedDBInstancesOfferingIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReservedDBInstancesOfferingId=" << StringUtils::URLEncode(m_reservedDBInstancesOfferingId.c_str()) << "&";
  }
  if(m_dBInstanceClassHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBInstanceClass=" << StringUtils::URLEncode(m_dBInstanceClass.c_str()) << "&";
  }
  if(m_startTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".StartTime=" << m_startTime << "&";
  }
  if(m_durationHasBeenSet)
  {
      oStream << location << index << locationValue << ".Duration=" << m_duration << "&";
  }
  if(m_fixedPriceHasBeenSet)
  {
      oStream << location << index << locationValue << ".FixedPrice=" << m_fixedPrice << "&";
  }
  if(m_usagePriceHasBeenSet)
  {
      oStream << location << index << locationValue << ".UsagePrice=" << m_usagePrice << "&";
  }
  if(m_currencyCodeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CurrencyCode=" << StringUtils::URLEncode(m_currencyCode.c_str()) << "&";
  }
  if(m_dBInstanceCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".DBInstanceCount=" << m_dBInstanceCount << "&";
  }
  if(m_productDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ProductDescription=" << StringUtils::URLEncode(m_productDescription.c_str()) << "&";
  }
  if(m_offeringTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".OfferingType=" << StringUtils::URLEncode(m_offeringType.c_str()) << "&";
  }
  if(m_multiAZHasBeenSet)
  {
      oStream << location << index << locationValue << ".MultiAZ=" << m_multiAZ << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }
  if(m_recurringChargesHasBeenSet)
  {
      for(auto& item : m_recurringCharges)
      {
        Aws::StringStream recurringChargesSs;
        recurringChargesSs << location << index << locationValue << ".RecurringCharge";
        item.OutputToStream(oStream, recurringChargesSs.str().c_str());
      }
  }
}

void ReservedDBInstance::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_reservedDBInstanceIdHasBeenSet)
  {
      oStream << location << ".ReservedDBInstanceId=" << StringUtils::URLEncode(m_reservedDBInstanceId.c_str()) << "&";
  }
  if(m_reservedDBInstancesOfferingIdHasBeenSet)
  {
      oStream << location << ".ReservedDBInstancesOfferingId=" << StringUtils::URLEncode(m_reservedDBInstancesOfferingId.c_str()) << "&";
  }
  if(m_dBInstanceClassHasBeenSet)
  {
      oStream << location << ".DBInstanceClass=" << StringUtils::URLEncode(m_dBInstanceClass.c_str()) << "&";
  }
  if(m_startTimeHasBeenSet)
  {
      oStream << location << ".StartTime=" << m_startTime << "&";
  }
  if(m_durationHasBeenSet)
  {
      oStream << location << ".Duration=" << m_duration << "&";
  }
  if(m_fixedPriceHasBeenSet)
  {
      oStream << location << ".FixedPrice=" << m_fixedPrice << "&";
  }
  if(m_usagePriceHasBeenSet)
  {
      oStream << location << ".UsagePrice=" << m_usagePrice << "&";
  }
  if(m_currencyCodeHasBeenSet)
  {
      oStream << location << ".CurrencyCode=" << StringUtils::URLEncode(m_currencyCode.c_str()) << "&";
  }
  if(m_dBInstanceCountHasBeenSet)
  {
      oStream << location << ".DBInstanceCount=" << m_dBInstanceCount << "&";
  }
  if(m_productDescriptionHasBeenSet)
  {
      oStream << location << ".ProductDescription=" << StringUtils::URLEncode(m_productDescription.c_str()) << "&";
  }
  if(m_offeringTypeHasBeenSet)
  {
      oStream << location << ".OfferingType=" << StringUtils::URLEncode(m_offeringType.c_str()) << "&";
  }
  if(m_multiAZHasBeenSet)
  {
      oStream << location << ".MultiAZ=" << m_multiAZ << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }
  if(m_recurringChargesHasBeenSet)
  {
      for(auto& item : m_recurringCharges)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".RecurringCharge";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
}
