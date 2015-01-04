#ifndef AABB_HPP_INCLUDED
#define AABB_HPP_INCLUDED

#include <glm/glm.hpp>

class AABB
{
	public:
		AABB();
		AABB( glm::vec3 lower, glm::vec3 upper );

		glm::vec3 getSize() const;
		glm::vec3 getCenter() const;
		float getVolume() const;


		glm::vec3 lower;
		glm::vec3 upper;
};

#endif // AABB_HPP_INCLUDED
