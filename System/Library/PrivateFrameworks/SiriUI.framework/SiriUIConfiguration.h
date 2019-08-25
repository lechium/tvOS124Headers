/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SiriUIConfiguration : NSObject <NSCopying> {

	BOOL _isSystemHostedPresentation;
	int _flamesViewFidelity;

}

@property (nonatomic,readonly) int flamesViewFidelity;                       //@synthesize flamesViewFidelity=_flamesViewFidelity - In the implementation block
@property (nonatomic,readonly) BOOL isSystemHostedPresentation;              //@synthesize isSystemHostedPresentation=_isSystemHostedPresentation - In the implementation block
-(int)flamesViewFidelity;
-(id)initWithFlamesViewFidelity:(int)arg1 isSystemHostedPresentation:(BOOL)arg2 ;
-(BOOL)isSystemHostedPresentation;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

