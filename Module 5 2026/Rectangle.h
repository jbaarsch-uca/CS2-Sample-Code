// Specification file for the Rectangle class
#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
   private:
      double width;     // The rectangle's width
      double length;    // The rectangle's length
   public:
      // Exception class for a negative width
      class NegativeWidthException
      {
      private:
         int value;
      public:
         NegativeWidthException(int val)
            { value = val; }

         int getValue() const
            { return value; }
      };
      
      // Exception class for a negative length
      class NegativeLengthException
      {
      private:
         int value;
      public:
         NegativeLengthException(int val)
            { value = val; }

         int getValue() const
            { return value; }
      };

      // Default constructor
      Rectangle()
         { width = 0.0; length = 0.0; }
      
      // Mutator functions, defined in Rectangle.cpp
      void setWidth(double);
      void setLength(double);
      
      // Accessor functions
      double getWidth() const
         { return width; }

      double getLength() const
         { return length; }

      double getArea() const
         { return width * length; }

      operator double() {
          return 4.5;
      }

};
#endif