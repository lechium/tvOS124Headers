/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Espresso/Espresso-Structs.h>
#import <Espresso/EspressoDataFrameAttachment.h>

@interface EspressoDataFrameTensorAttachment : EspressoDataFrameAttachment {

	SCD_Struct_ET51* buffer;

}
+(SCD_Struct_ET51*)copyFromCVPixelBuffer:(CVBufferRef)arg1 ;
-(void)loadFromDict:(id)arg1 frameStorage:(id)arg2 ;
-(SCD_Struct_ET51*)copyAsEspressoBuffer;
@end
