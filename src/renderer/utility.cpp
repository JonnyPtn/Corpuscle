#include "utility.hpp"

#include <boost/algorithm/string.hpp>

glm::vec3 clamp( glm::vec3 vec )
{
	return glm::vec3( clamp( vec.x ),
					  clamp( vec.y ),
					  clamp( vec.z ) );
}

glm::vec3 gammaCorrected(glm::vec3 col, float param)
{
	return glm::vec3( std::pow( col.r, param ),
					  std::pow( col.g, param ),
					  std::pow( col.b, param ) );
}

glm::vec2 parseVector2( const std::string &str, const glm::vec2& defaultValue  )
{
	std::vector<std::string> strings;
	boost::split( strings, str, boost::is_any_of("\t ") );

	if( strings.size() != 2 ){
		return defaultValue;
	}

	return glm::vec2( std::stof( strings[0] ),
					  std::stof( strings[1] ) );
}

glm::vec3 parseVector3( const std::string &str, const glm::vec3& defaultValue  )
{
	std::vector<std::string> strings;
	boost::split( strings, str, boost::is_any_of("\t ") );

	if( strings.size() != 3 ){
		return defaultValue;
	}

	return glm::vec3( std::stof( strings[0] ),
					  std::stof( strings[1] ),
					  std::stof( strings[2] ) );
}
