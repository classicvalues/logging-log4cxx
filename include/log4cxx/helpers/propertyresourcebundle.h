/*
 * Copyright 2003,2004 The Apache Software Foundation.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
 
#ifndef _LOG4CXX_HELPERS_PROPERTY_RESOURCE_BUNDLE_H
#define _LOG4CXX_HELPERS_PROPERTY_RESOURCE_BUNDLE_H

#include <log4cxx/helpers/resourcebundle.h>
#include <log4cxx/helpers/properties.h>

namespace log4cxx
{
	namespace helpers
	{
		class PropertyResourceBundle;
		typedef ObjectPtrT<PropertyResourceBundle> PropertyResourceBundlePtr;

		/** 
		PropertyResourceBundle is a concrete subclass of ResourceBundle that
		manages resources for a locale using a set of static strings from a
		property file.
		*/
		class LOG4CXX_EXPORT PropertyResourceBundle : public ResourceBundle
		{
		public:
			DECLARE_ABSTRACT_LOG4CXX_OBJECT(PropertyResourceBundle)
			BEGIN_LOG4CXX_CAST_MAP()
				LOG4CXX_CAST_ENTRY(PropertyResourceBundle)
				LOG4CXX_CAST_ENTRY_CHAIN(ResourceBundle)
			END_LOG4CXX_CAST_MAP()
			
			/**
			Creates a property resource bundle.
			@param inStream property file to read from.
			@throw IOException if an error occurred when reading from the
			input stream.
			*/
			PropertyResourceBundle(istream& inStream);

			virtual String getString(const String& key) const;
					
		protected:
			Properties properties;
		}; // class PropertyResourceBundle
 	}; // namespace helpers
}; // namespace log4cxx

#endif // _LOG4CXX_HELPERS_PROPERTY_RESOURCE_BUNDLE_H
 
