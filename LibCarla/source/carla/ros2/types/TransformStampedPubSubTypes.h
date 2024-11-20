// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file TransformStampedPubSubTypes.h
 * This header file contains the declaration of the serialization functions.
 *
 * This file was generated by the tool fastcdrgen.
 */

#ifndef _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_TRANSFORMSTAMPED_PUBSUBTYPES_H_ // 防止重复包含的宏定义
#define _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_TRANSFORMSTAMPED_PUBSUBTYPES_H_

#include <fastdds/dds/topic/TopicDataType.hpp> // 引入Fast DDS主题数据类型的头文件
#include <fastrtps/utils/md5.h> // 引入MD5工具的头文件

#include "TransformStamped.h" // 引入用户定义的TransformStamped消息类型

#include "HeaderPubSubTypes.h" // 引入Header的序列化与反序列化类型
#include "TransformPubSubTypes.h" // 引入Transform的序列化与反序列化类型

#if !defined(GEN_API_VER) || (GEN_API_VER != 1) // 检查生成的API版本
#error \
    Generated TransformStamped is not compatible with current installed Fast DDS. Please, regenerate it with fastddsgen. // 生成的TransformStamped与当前安装的Fast DDS不兼容，请使用fastddsgen重新生成。
#endif  // GEN_API_VER

namespace geometry_msgs // 定义几何消息的命名空间
{
    namespace msg // 定义消息命名空间
    {

        /*!
         * @brief This class represents the TopicDataType of the type TransformStamped defined by the user in the IDL file. // 该类表示IDL文件中用户定义的TransformStamped类型的主题数据类型。
         * @ingroup TRANSFORMSTAMPED // 属于TRANSFORMSTAMPED组
         */
        class TransformStampedPubSubType : public eprosima::fastdds::dds::TopicDataType // TransformStampedPubSubType类继承自TopicDataType
        {
        public:

            typedef TransformStamped type; // 类型别名，TransformStamped对应的类型

            eProsima_user_DllExport TransformStampedPubSubType(); // 构造函数

            eProsima_user_DllExport virtual ~TransformStampedPubSubType() override; // 析构函数

            eProsima_user_DllExport virtual bool serialize( // 序列化函数
                    void* data, // 输入数据指针
                    eprosima::fastrtps::rtps::SerializedPayload_t* payload) override; // 输出序列化负载指针

            eProsima_user_DllExport virtual bool deserialize( // 反序列化函数
                    eprosima::fastrtps::rtps::SerializedPayload_t* payload, // 输入序列化负载指针
                    void* data) override; // 输出数据指针

            eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider( // 获取序列化大小提供者
                    void* data) override; // 输入数据指针

            eProsima_user_DllExport virtual bool getKey( // 获取键值函数
                    void* data, // 输入数据指针
                    eprosima::fastrtps::rtps::InstanceHandle_t* ihandle, // 输出实例句柄指针
                    bool force_md5 = false) override; // 是否强制使用MD5参数

            eProsima_user_DllExport virtual void* createData() override; // 创建数据函数

            eProsima_user_DllExport virtual void deleteData( // 删除数据函数
                    void* data) override; // 输入数据指针

        #ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED // 检查API是否具有is_bounded功能
            eProsima_user_DllExport inline bool is_bounded() const override // 是否有界函数
            {
                return false; // 返回false
            }

        #endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED

        #ifdef TOPIC_DATA_TYPE_API_HAS_IS_PLAIN // 检查API是否具有is_plain功能
            eProsima_user_DllExport inline bool is_plain() const override // 是否为简单类型函数
            {
                return false; // 返回false
            }

        #endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN

        #ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE // 检查API是否具有construct_sample功能
            eProsima_user_DllExport inline bool construct_sample( // 构造样本函数
                    void* memory) const override // 输入内存指针
            {
                (void)memory; // 不使用memory
                return false; // 返回false
            }

        #endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
            MD5 m_md5; // MD5哈希值
            unsigned char* m_keyBuffer; // 键缓冲区
        };
    }
}

#endif // _FAST_DDS_GENERATED_GEOMETRY_MSGS_MSG_TRANSFORMSTAMPED_PUBSUBTYPES_H_// 结束宏定义