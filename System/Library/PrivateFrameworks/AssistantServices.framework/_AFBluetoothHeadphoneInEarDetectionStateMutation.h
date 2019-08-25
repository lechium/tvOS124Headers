/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFBluetoothHeadphoneInEarDetectionStateMutating.h>

@class AFBluetoothHeadphoneInEarDetectionState, NSString;

@interface _AFBluetoothHeadphoneInEarDetectionStateMutation : NSObject <AFBluetoothHeadphoneInEarDetectionStateMutating> {

	AFBluetoothHeadphoneInEarDetectionState* _baseModel;
	BOOL _isEnabled;
	long long _primaryEarbudSide;
	long long _primaryInEarStatus;
	long long _secondaryInEarStatus;
	struct {
		unsigned isDirty : 1;
		unsigned hasIsEnabled : 1;
		unsigned hasPrimaryEarbudSide : 1;
		unsigned hasPrimaryInEarStatus : 1;
		unsigned hasSecondaryInEarStatus : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBaseModel:(id)arg1 ;
-(void)setPrimaryEarbudSide:(long long)arg1 ;
-(void)setPrimaryInEarStatus:(long long)arg1 ;
-(void)setSecondaryInEarStatus:(long long)arg1 ;
-(id)generate;
-(void)setIsEnabled:(BOOL)arg1 ;
-(id)init;
@end
