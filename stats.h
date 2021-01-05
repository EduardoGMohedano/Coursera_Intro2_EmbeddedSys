/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.h 
 * @brief <Function prototype definitions to perform analysis on an array of unsigned data char items >
 *
 * <Among the functions there are: printing statistics, printing the array, find statistics parameters such as median, mean, maximum, minimum and sorting the array >
 *
 * @author <Eduardo Garcia>
 * @date <01/01/2021 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */


/**
 * @brief Print statistics of an array including the minimum, maximum and median  
 *
 * This functions takes as an input an unsigned char pointer to the array and 
 * computes its minimum, maximum and median values by calling the respective functions
 * once the values are get, they are printed. 
 *
 * @param array is a pointer to the contents of data
 * @param size is the array length   
 * 
 * @return Void as nothing is returned
 */
void print_statistics(unsigned char* array, unsigned int size);



/**
 * @brief Print to the screen all the elements of an array  
 *
 * This functions takes as an input an unsigned char pointer to the array 
 * which will be printed on screen. 
 *
 * @param array is a pointer to the contents of data
 * @param size is the array length  
 *
 * @return void as nothing is returned
 */
void print_array(unsigned char* array, unsigned int size);


/**
 * @brief Find the statistic median of an array  
 *
 * This functions takes as an input an unsigned char pointer to the array 
 * then the sort_array function will be called in order to find the median value
 * which will be returned. If array size is even the two values in the middle are averaged,
 * otherwise the middle value is returned.
 *
 * @param array is a pointer to the contents of data
 * @param size is the array length 
 *
 * @return unsigned char which contains the median value.
 */
unsigned char find_median(unsigned char* array, unsigned int size);


/**
 * @brief Find the mean value of an array  
 *
 * This functions takes as an input an unsigned char pointer to the array 
 * then the mean value is computed and returned.
 *
 * @param array is a pointer to the contents of data
 * @param size is the array length 
 *
 * @return unsigned char which contains the mean value.
 */
unsigned char find_mean(unsigned char* array, unsigned int size);


/**
 * @brief Find the maximum value of an array  
 *
 * This functions takes as an input an unsigned char pointer to the array 
 * then the maximum value is found and returned.
 *
 * @param array is a pointer to the contents of data
 * @param size is the array length 
 *
 * @return unsigned char which contains the maximum value.
 */
unsigned char find_maximum(unsigned char* array, unsigned int size);



/**
 * @brief Find the minimum value of an array  
 *
 * This functions takes as an input an unsigned char pointer to the array 
 * then the minimum value is found and returned.
 *
 * @param array is a pointer to the contents of data
 * @param size is the array length 
 *
 * @return unsigned char which contains the minimum value.
 */
unsigned char find_minimum(unsigned char* array, unsigned int size);


/**
 * @brief Sort an array from largest to smallest  
 *
 * This functions takes as an input an unsigned char pointer to the array 
 * and then bubble sort algorithm is executed.
 *
 * @param array is a pointer to the contents of data
 * @param size is the array length 
 *
 * @return unsigned char which contains the minimum value.
 */
unsigned char* sort_array(unsigned char* array, unsigned int size,unsigned char* new_arrray);




#endif /* __STATS_H__ */
