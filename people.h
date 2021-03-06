#ifndef PEOPLE_H
#define PEOPLE_H

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */



typedef struct{
  float age;
  int gender; //[0=man, 1=woman]
  int status; //[0=healthy, 1=sick, 2=immune, -1=dead]
  float time_recovery; //[hours]
  float position[2]; // [x,y] m
  float direction[2]; // [x,y] m
  
}People;

People new_People(int age, int gender, int status, float time_recovery,
		  float p_x, float p_y, float r_x, float r_y);

#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* PEOPLE_H */
