/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAVideoOperation.h>

@interface IPAPosterFrameOperation : IPAVideoOperation {

	SCD_Struct_IP1 _frameTime;

}

@property (nonatomic,readonly) SCD_Struct_IP1 frameTime;              //@synthesize frameTime=_frameTime - In the implementation block
-(id)initWithOperation:(id)arg1 ;
-(SCD_Struct_IP1)frameTime;
-(id)initWithSettingsDictionary:(id)arg1 ;
-(BOOL)isEqualToOperation:(id)arg1 ;
-(id)settingsDictionary;
-(id)initWithFrameTime:(SCD_Struct_IP1)arg1 ;
-(id)identifier;
-(id)debugDescription;
@end

