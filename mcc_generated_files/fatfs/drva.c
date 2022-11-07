/*
    (c) 2016 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

#include <stdbool.h>
#include <stdint.h>

bool DRVA_IsMediaPresent(void)
{
    #warning "You will need to implement this function for this driver to work."
    return false;
}

bool DRVA_MediaInitialize(void)
{
    #warning "You will need to implement this function for this driver to work."
    return false;
}

bool DRVA_IsMediaInitialized(void)
{
    #warning "You will need to implement this function for this driver to work."
    return false;
}

bool DRVA_IsWriteProtected(void)
{
    #warning "You will need to implement this function for this driver to work."
    return false;
}

uint16_t DRVA_GetSectorSize(void)
{
    #warning "You will need to implement this function for this driver to work."
    return 512;
}

uint32_t DRVA_GetSectorCount(void)
{
    #warning "You will need to implement this function for this driver to work."
    return 0;
}

bool DRVA_SectorRead(uint32_t sector_address, uint8_t* buffer, uint16_t sector_count)
{
    #warning "You will need to implement this function for this driver to work."
    return false;
}

bool DRVA_SectorWrite(uint32_t sector_address, const uint8_t* buffer, uint16_t sector_count);
{
    #warning "You will need to implement this function for this driver to work."
    return false;
}