﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>The tags to apply to a resource when the resource is being
   * created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TagSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API TagSpecification
  {
  public:
    TagSpecification();
    TagSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    TagSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The type of resource to tag. Currently, the resource types that support
     * tagging on creation are: <code>capacity-reservation</code> |
     * <code>client-vpn-endpoint</code> | <code>dedicated-host</code> |
     * <code>fleet</code> | <code>instance</code> | <code>launch-template</code> |
     * <code>snapshot</code> | <code>transit-gateway</code> |
     * <code>transit-gateway-attachment</code> |
     * <code>transit-gateway-route-table</code> | <code>volume</code>.</p> <p>To tag a
     * resource after it has been created, see <a>CreateTags</a>.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource to tag. Currently, the resource types that support
     * tagging on creation are: <code>capacity-reservation</code> |
     * <code>client-vpn-endpoint</code> | <code>dedicated-host</code> |
     * <code>fleet</code> | <code>instance</code> | <code>launch-template</code> |
     * <code>snapshot</code> | <code>transit-gateway</code> |
     * <code>transit-gateway-attachment</code> |
     * <code>transit-gateway-route-table</code> | <code>volume</code>.</p> <p>To tag a
     * resource after it has been created, see <a>CreateTags</a>.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource to tag. Currently, the resource types that support
     * tagging on creation are: <code>capacity-reservation</code> |
     * <code>client-vpn-endpoint</code> | <code>dedicated-host</code> |
     * <code>fleet</code> | <code>instance</code> | <code>launch-template</code> |
     * <code>snapshot</code> | <code>transit-gateway</code> |
     * <code>transit-gateway-attachment</code> |
     * <code>transit-gateway-route-table</code> | <code>volume</code>.</p> <p>To tag a
     * resource after it has been created, see <a>CreateTags</a>.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource to tag. Currently, the resource types that support
     * tagging on creation are: <code>capacity-reservation</code> |
     * <code>client-vpn-endpoint</code> | <code>dedicated-host</code> |
     * <code>fleet</code> | <code>instance</code> | <code>launch-template</code> |
     * <code>snapshot</code> | <code>transit-gateway</code> |
     * <code>transit-gateway-attachment</code> |
     * <code>transit-gateway-route-table</code> | <code>volume</code>.</p> <p>To tag a
     * resource after it has been created, see <a>CreateTags</a>.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource to tag. Currently, the resource types that support
     * tagging on creation are: <code>capacity-reservation</code> |
     * <code>client-vpn-endpoint</code> | <code>dedicated-host</code> |
     * <code>fleet</code> | <code>instance</code> | <code>launch-template</code> |
     * <code>snapshot</code> | <code>transit-gateway</code> |
     * <code>transit-gateway-attachment</code> |
     * <code>transit-gateway-route-table</code> | <code>volume</code>.</p> <p>To tag a
     * resource after it has been created, see <a>CreateTags</a>.</p>
     */
    inline TagSpecification& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource to tag. Currently, the resource types that support
     * tagging on creation are: <code>capacity-reservation</code> |
     * <code>client-vpn-endpoint</code> | <code>dedicated-host</code> |
     * <code>fleet</code> | <code>instance</code> | <code>launch-template</code> |
     * <code>snapshot</code> | <code>transit-gateway</code> |
     * <code>transit-gateway-attachment</code> |
     * <code>transit-gateway-route-table</code> | <code>volume</code>.</p> <p>To tag a
     * resource after it has been created, see <a>CreateTags</a>.</p>
     */
    inline TagSpecification& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The tags to apply to the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to apply to the resource.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to apply to the resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to apply to the resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to apply to the resource.</p>
     */
    inline TagSpecification& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to apply to the resource.</p>
     */
    inline TagSpecification& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the resource.</p>
     */
    inline TagSpecification& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the resource.</p>
     */
    inline TagSpecification& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
