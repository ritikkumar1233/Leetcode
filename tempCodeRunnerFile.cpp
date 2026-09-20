int closestX = std::max(x1, std::min(xCenter, x2));
        int closestY = std::max(y1, std::min(yCenter, y2));
        int distX = xCenter - closestX;
        int distY = yCenter - closestY;
        int distanceSquared = (distX * distX) + (distY * distY);
        return distanceSquared <= (radius * radius);