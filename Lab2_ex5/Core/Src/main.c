
#include "main.h"


#include "software_timer2.h"

TIM_HandleTypeDef htim2;


void display7SEG(int num)

{
	//0
		if(num == 0){
		 HAL_GPIO_WritePin(PB0_GPIO_Port, PB0_Pin , GPIO_PIN_RESET);
		    HAL_GPIO_WritePin(PB1_GPIO_Port, PB1_Pin , GPIO_PIN_RESET);
		    HAL_GPIO_WritePin(PB2_GPIO_Port, PB2_Pin , GPIO_PIN_RESET);
		    HAL_GPIO_WritePin(PB3_GPIO_Port, PB3_Pin , GPIO_PIN_RESET);
		    HAL_GPIO_WritePin(PB4_GPIO_Port, PB4_Pin , GPIO_PIN_RESET);
		    HAL_GPIO_WritePin(PB5_GPIO_Port, PB5_Pin , GPIO_PIN_RESET);
		    HAL_GPIO_WritePin(PB6_GPIO_Port, PB6_Pin , GPIO_PIN_SET);
		    }
		//1
	    if(num==1){
	    HAL_GPIO_WritePin(PB0_GPIO_Port, PB0_Pin , GPIO_PIN_SET);
	    HAL_GPIO_WritePin(PB1_GPIO_Port, PB1_Pin , GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(PB2_GPIO_Port, PB2_Pin , GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(PB3_GPIO_Port, PB3_Pin , GPIO_PIN_SET);
	    HAL_GPIO_WritePin(PB4_GPIO_Port, PB4_Pin , GPIO_PIN_SET);
	    HAL_GPIO_WritePin(PB5_GPIO_Port, PB5_Pin , GPIO_PIN_SET);
	    HAL_GPIO_WritePin(PB6_GPIO_Port, PB6_Pin , GPIO_PIN_SET);
	    }
	    //2
	    if(num==2){
	    HAL_GPIO_WritePin(PB0_GPIO_Port, PB0_Pin , GPIO_PIN_RESET);//
	    HAL_GPIO_WritePin(PB1_GPIO_Port, PB1_Pin , GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(PB2_GPIO_Port, PB2_Pin , GPIO_PIN_SET);
	    HAL_GPIO_WritePin(PB3_GPIO_Port, PB3_Pin , GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(PB4_GPIO_Port, PB4_Pin , GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(PB5_GPIO_Port, PB5_Pin , GPIO_PIN_SET);
	    HAL_GPIO_WritePin(PB6_GPIO_Port, PB6_Pin , GPIO_PIN_RESET);
	    }
	    //3
	    if(num==3){
	    HAL_GPIO_WritePin(PB0_GPIO_Port, PB0_Pin , GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(PB1_GPIO_Port, PB1_Pin , GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(PB2_GPIO_Port, PB2_Pin , GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(PB3_GPIO_Port, PB3_Pin , GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(PB4_GPIO_Port, PB4_Pin , GPIO_PIN_SET);
	    HAL_GPIO_WritePin(PB5_GPIO_Port, PB5_Pin , GPIO_PIN_SET);
	    HAL_GPIO_WritePin(PB6_GPIO_Port, PB6_Pin , GPIO_PIN_RESET);
	   }
	    //4
	    if(num==4){
	    HAL_GPIO_WritePin(PB0_GPIO_Port, PB0_Pin , GPIO_PIN_SET);
	    HAL_GPIO_WritePin(PB1_GPIO_Port, PB1_Pin , GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(PB2_GPIO_Port, PB2_Pin , GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(PB3_GPIO_Port, PB3_Pin , GPIO_PIN_SET);
	    HAL_GPIO_WritePin(PB4_GPIO_Port, PB4_Pin , GPIO_PIN_SET);
	    HAL_GPIO_WritePin(PB5_GPIO_Port, PB5_Pin , GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(PB6_GPIO_Port, PB6_Pin , GPIO_PIN_RESET);
	    }
	   //5
	    if(num==5){
	    HAL_GPIO_WritePin(PB0_GPIO_Port, PB0_Pin , GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(PB1_GPIO_Port, PB1_Pin , GPIO_PIN_SET);
	    HAL_GPIO_WritePin(PB2_GPIO_Port, PB2_Pin , GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(PB3_GPIO_Port, PB3_Pin , GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(PB4_GPIO_Port, PB4_Pin , GPIO_PIN_SET);
	    HAL_GPIO_WritePin(PB5_GPIO_Port, PB5_Pin , GPIO_PIN_RESET);
	    HAL_GPIO_WritePin(PB6_GPIO_Port, PB6_Pin , GPIO_PIN_RESET);
	    }
	    if(num==6){
	    	    HAL_GPIO_WritePin(PB0_GPIO_Port, PB0_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB1_GPIO_Port, PB1_Pin , GPIO_PIN_SET);
	    	    HAL_GPIO_WritePin(PB2_GPIO_Port, PB2_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB3_GPIO_Port, PB3_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB4_GPIO_Port, PB4_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB5_GPIO_Port, PB5_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB6_GPIO_Port, PB6_Pin , GPIO_PIN_RESET);
	    	    }
	    	    //7
	    	    if(num==7){
	    	    HAL_GPIO_WritePin(PB0_GPIO_Port, PB0_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB1_GPIO_Port, PB1_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB2_GPIO_Port, PB2_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB3_GPIO_Port, PB3_Pin , GPIO_PIN_SET);
	    	    HAL_GPIO_WritePin(PB4_GPIO_Port, PB4_Pin , GPIO_PIN_SET);
	    	    HAL_GPIO_WritePin(PB5_GPIO_Port, PB5_Pin , GPIO_PIN_SET);
	    	    HAL_GPIO_WritePin(PB6_GPIO_Port, PB6_Pin , GPIO_PIN_SET);
	    	    }
	    	    //8
	    	    if(num==8){
	    	    HAL_GPIO_WritePin(PB0_GPIO_Port, PB0_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB1_GPIO_Port, PB1_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB2_GPIO_Port, PB2_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB3_GPIO_Port, PB3_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB4_GPIO_Port, PB4_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB5_GPIO_Port, PB5_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB6_GPIO_Port, PB6_Pin , GPIO_PIN_RESET);
	    	   }
	    	    //9
	    	    if(num==9){
	    	    HAL_GPIO_WritePin(PB0_GPIO_Port, PB0_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB1_GPIO_Port, PB1_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB2_GPIO_Port, PB2_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB3_GPIO_Port, PB3_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB4_GPIO_Port, PB4_Pin , GPIO_PIN_SET);
	    	    HAL_GPIO_WritePin(PB5_GPIO_Port, PB5_Pin , GPIO_PIN_RESET);
	    	    HAL_GPIO_WritePin(PB6_GPIO_Port, PB6_Pin , GPIO_PIN_RESET);
	    	    }

}

const int MAX_LED = 4;
int led_buffer[4];


int denLed1 , denLed2;
void updateClockBuffer (int hour , int minute){
	led_buffer[0]=hour%10;
	led_buffer[1]=hour/10;
	led_buffer[2]=minute%10;
	led_buffer[3]=minute/10;

}
void update7SEG(int a){

	switch(a){
	case 0:

							HAL_GPIO_WritePin(PA6_GPIO_Port, PA6_Pin , GPIO_PIN_RESET);
							HAL_GPIO_WritePin(PA7_GPIO_Port, PA7_Pin , GPIO_PIN_SET);
							display7SEG(led_buffer[1]);

		break;
	case 1:
							HAL_GPIO_WritePin(PA6_GPIO_Port, PA6_Pin , GPIO_PIN_SET);
				  			HAL_GPIO_WritePin(PA7_GPIO_Port, PA7_Pin , GPIO_PIN_RESET);
				  			display7SEG(led_buffer[0]);

		break;

	default:
		break;

	}

}

void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_TIM2_Init(void);
int index_led = 0 ;
int main(void)
{

  HAL_Init();


  SystemClock_Config();


  MX_GPIO_Init();
  MX_TIM2_Init();

  HAL_TIM_Base_Start_IT (& htim2 ) ;


  setTimer1(100);

  int hour = 15 , minute = 8 , second = 50;

  while (1)
  {
	  updateClockBuffer (hour) ;

	    if(timer1_flag == 1){
	            if(index_led == 0){
	                   update7SEG(0);
	            }
	            else{
	                  update7SEG(1);
	            }
	            index_led = 1 - index_led;
	            setTimer1(100);
	   }




	   second ++;

	   if ( second >= 60) {
	   second = 0;
	   minute ++;
	   }
	   if( minute >= 60) {
	   minute = 0;
	   hour ++;
	   }
	   if( hour >=24) {
	   hour = 0;
	   }






  }

}


void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}


static void MX_TIM2_Init(void)
{

  /* USER CODE BEGIN TIM2_Init 0 */

  /* USER CODE END TIM2_Init 0 */

  TIM_ClockConfigTypeDef sClockSourceConfig = {0};
  TIM_MasterConfigTypeDef sMasterConfig = {0};

  /* USER CODE BEGIN TIM2_Init 1 */

  /* USER CODE END TIM2_Init 1 */
  htim2.Instance = TIM2;
  htim2.Init.Prescaler = 7999;
  htim2.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim2.Init.Period = 9;
  htim2.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
  htim2.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
  if (HAL_TIM_Base_Init(&htim2) != HAL_OK)
  {
    Error_Handler();
  }
  sClockSourceConfig.ClockSource = TIM_CLOCKSOURCE_INTERNAL;
  if (HAL_TIM_ConfigClockSource(&htim2, &sClockSourceConfig) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim2, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM2_Init 2 */

  /* USER CODE END TIM2_Init 2 */

}


static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, PA4_Pin|PA6_Pin|PA7_Pin|PA8_Pin
                          |PA9_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, PB0_Pin|PB1_Pin|PB2_Pin|PB3_Pin
                          |PB4_Pin|PB5_Pin|PB6_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : PA4_Pin PA6_Pin PA7_Pin PA8_Pin
                           PA9_Pin */
  GPIO_InitStruct.Pin = PA4_Pin|PA6_Pin|PA7_Pin|PA8_Pin
                          |PA9_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : PB0_Pin PB1_Pin PB2_Pin PB3_Pin
                           PB4_Pin PB5_Pin PB6_Pin */
  GPIO_InitStruct.Pin = PB0_Pin|PB1_Pin|PB2_Pin|PB3_Pin
                          |PB4_Pin|PB5_Pin|PB6_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}


void HAL_TIM_PeriodElapsedCallback ( TIM_HandleTypeDef * htim )
{
timerRun();
}

void Error_Handler(void)
{

  __disable_irq();
  while (1)
  {
  }

}

#ifdef  USE_FULL_ASSERT

void assert_failed(uint8_t *file, uint32_t line)
{

}
#endif
