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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>Custom libraries to be loaded into a development endpoint.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DevEndpointCustomLibraries">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API DevEndpointCustomLibraries
  {
  public:
    DevEndpointCustomLibraries();
    DevEndpointCustomLibraries(Aws::Utils::Json::JsonView jsonValue);
    DevEndpointCustomLibraries& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The paths to one or more Python libraries in an Amazon Simple Storage Service
     * (Amazon S3) bucket that should be loaded in your <code>DevEndpoint</code>.
     * Multiple values must be complete paths separated by a comma.</p> <note> <p>You
     * can only use pure Python libraries with a <code>DevEndpoint</code>. Libraries
     * that rely on C extensions, such as the <a
     * href="http://pandas.pydata.org/">pandas</a> Python data analysis library, are
     * not currently supported.</p> </note>
     */
    inline const Aws::String& GetExtraPythonLibsS3Path() const{ return m_extraPythonLibsS3Path; }

    /**
     * <p>The paths to one or more Python libraries in an Amazon Simple Storage Service
     * (Amazon S3) bucket that should be loaded in your <code>DevEndpoint</code>.
     * Multiple values must be complete paths separated by a comma.</p> <note> <p>You
     * can only use pure Python libraries with a <code>DevEndpoint</code>. Libraries
     * that rely on C extensions, such as the <a
     * href="http://pandas.pydata.org/">pandas</a> Python data analysis library, are
     * not currently supported.</p> </note>
     */
    inline bool ExtraPythonLibsS3PathHasBeenSet() const { return m_extraPythonLibsS3PathHasBeenSet; }

    /**
     * <p>The paths to one or more Python libraries in an Amazon Simple Storage Service
     * (Amazon S3) bucket that should be loaded in your <code>DevEndpoint</code>.
     * Multiple values must be complete paths separated by a comma.</p> <note> <p>You
     * can only use pure Python libraries with a <code>DevEndpoint</code>. Libraries
     * that rely on C extensions, such as the <a
     * href="http://pandas.pydata.org/">pandas</a> Python data analysis library, are
     * not currently supported.</p> </note>
     */
    inline void SetExtraPythonLibsS3Path(const Aws::String& value) { m_extraPythonLibsS3PathHasBeenSet = true; m_extraPythonLibsS3Path = value; }

    /**
     * <p>The paths to one or more Python libraries in an Amazon Simple Storage Service
     * (Amazon S3) bucket that should be loaded in your <code>DevEndpoint</code>.
     * Multiple values must be complete paths separated by a comma.</p> <note> <p>You
     * can only use pure Python libraries with a <code>DevEndpoint</code>. Libraries
     * that rely on C extensions, such as the <a
     * href="http://pandas.pydata.org/">pandas</a> Python data analysis library, are
     * not currently supported.</p> </note>
     */
    inline void SetExtraPythonLibsS3Path(Aws::String&& value) { m_extraPythonLibsS3PathHasBeenSet = true; m_extraPythonLibsS3Path = std::move(value); }

    /**
     * <p>The paths to one or more Python libraries in an Amazon Simple Storage Service
     * (Amazon S3) bucket that should be loaded in your <code>DevEndpoint</code>.
     * Multiple values must be complete paths separated by a comma.</p> <note> <p>You
     * can only use pure Python libraries with a <code>DevEndpoint</code>. Libraries
     * that rely on C extensions, such as the <a
     * href="http://pandas.pydata.org/">pandas</a> Python data analysis library, are
     * not currently supported.</p> </note>
     */
    inline void SetExtraPythonLibsS3Path(const char* value) { m_extraPythonLibsS3PathHasBeenSet = true; m_extraPythonLibsS3Path.assign(value); }

    /**
     * <p>The paths to one or more Python libraries in an Amazon Simple Storage Service
     * (Amazon S3) bucket that should be loaded in your <code>DevEndpoint</code>.
     * Multiple values must be complete paths separated by a comma.</p> <note> <p>You
     * can only use pure Python libraries with a <code>DevEndpoint</code>. Libraries
     * that rely on C extensions, such as the <a
     * href="http://pandas.pydata.org/">pandas</a> Python data analysis library, are
     * not currently supported.</p> </note>
     */
    inline DevEndpointCustomLibraries& WithExtraPythonLibsS3Path(const Aws::String& value) { SetExtraPythonLibsS3Path(value); return *this;}

    /**
     * <p>The paths to one or more Python libraries in an Amazon Simple Storage Service
     * (Amazon S3) bucket that should be loaded in your <code>DevEndpoint</code>.
     * Multiple values must be complete paths separated by a comma.</p> <note> <p>You
     * can only use pure Python libraries with a <code>DevEndpoint</code>. Libraries
     * that rely on C extensions, such as the <a
     * href="http://pandas.pydata.org/">pandas</a> Python data analysis library, are
     * not currently supported.</p> </note>
     */
    inline DevEndpointCustomLibraries& WithExtraPythonLibsS3Path(Aws::String&& value) { SetExtraPythonLibsS3Path(std::move(value)); return *this;}

    /**
     * <p>The paths to one or more Python libraries in an Amazon Simple Storage Service
     * (Amazon S3) bucket that should be loaded in your <code>DevEndpoint</code>.
     * Multiple values must be complete paths separated by a comma.</p> <note> <p>You
     * can only use pure Python libraries with a <code>DevEndpoint</code>. Libraries
     * that rely on C extensions, such as the <a
     * href="http://pandas.pydata.org/">pandas</a> Python data analysis library, are
     * not currently supported.</p> </note>
     */
    inline DevEndpointCustomLibraries& WithExtraPythonLibsS3Path(const char* value) { SetExtraPythonLibsS3Path(value); return *this;}


    /**
     * <p>The path to one or more Java <code>.jar</code> files in an S3 bucket that
     * should be loaded in your <code>DevEndpoint</code>.</p> <note> <p>You can only
     * use pure Java/Scala libraries with a <code>DevEndpoint</code>.</p> </note>
     */
    inline const Aws::String& GetExtraJarsS3Path() const{ return m_extraJarsS3Path; }

    /**
     * <p>The path to one or more Java <code>.jar</code> files in an S3 bucket that
     * should be loaded in your <code>DevEndpoint</code>.</p> <note> <p>You can only
     * use pure Java/Scala libraries with a <code>DevEndpoint</code>.</p> </note>
     */
    inline bool ExtraJarsS3PathHasBeenSet() const { return m_extraJarsS3PathHasBeenSet; }

    /**
     * <p>The path to one or more Java <code>.jar</code> files in an S3 bucket that
     * should be loaded in your <code>DevEndpoint</code>.</p> <note> <p>You can only
     * use pure Java/Scala libraries with a <code>DevEndpoint</code>.</p> </note>
     */
    inline void SetExtraJarsS3Path(const Aws::String& value) { m_extraJarsS3PathHasBeenSet = true; m_extraJarsS3Path = value; }

    /**
     * <p>The path to one or more Java <code>.jar</code> files in an S3 bucket that
     * should be loaded in your <code>DevEndpoint</code>.</p> <note> <p>You can only
     * use pure Java/Scala libraries with a <code>DevEndpoint</code>.</p> </note>
     */
    inline void SetExtraJarsS3Path(Aws::String&& value) { m_extraJarsS3PathHasBeenSet = true; m_extraJarsS3Path = std::move(value); }

    /**
     * <p>The path to one or more Java <code>.jar</code> files in an S3 bucket that
     * should be loaded in your <code>DevEndpoint</code>.</p> <note> <p>You can only
     * use pure Java/Scala libraries with a <code>DevEndpoint</code>.</p> </note>
     */
    inline void SetExtraJarsS3Path(const char* value) { m_extraJarsS3PathHasBeenSet = true; m_extraJarsS3Path.assign(value); }

    /**
     * <p>The path to one or more Java <code>.jar</code> files in an S3 bucket that
     * should be loaded in your <code>DevEndpoint</code>.</p> <note> <p>You can only
     * use pure Java/Scala libraries with a <code>DevEndpoint</code>.</p> </note>
     */
    inline DevEndpointCustomLibraries& WithExtraJarsS3Path(const Aws::String& value) { SetExtraJarsS3Path(value); return *this;}

    /**
     * <p>The path to one or more Java <code>.jar</code> files in an S3 bucket that
     * should be loaded in your <code>DevEndpoint</code>.</p> <note> <p>You can only
     * use pure Java/Scala libraries with a <code>DevEndpoint</code>.</p> </note>
     */
    inline DevEndpointCustomLibraries& WithExtraJarsS3Path(Aws::String&& value) { SetExtraJarsS3Path(std::move(value)); return *this;}

    /**
     * <p>The path to one or more Java <code>.jar</code> files in an S3 bucket that
     * should be loaded in your <code>DevEndpoint</code>.</p> <note> <p>You can only
     * use pure Java/Scala libraries with a <code>DevEndpoint</code>.</p> </note>
     */
    inline DevEndpointCustomLibraries& WithExtraJarsS3Path(const char* value) { SetExtraJarsS3Path(value); return *this;}

  private:

    Aws::String m_extraPythonLibsS3Path;
    bool m_extraPythonLibsS3PathHasBeenSet;

    Aws::String m_extraJarsS3Path;
    bool m_extraJarsS3PathHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
