/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VNWarningRecorder.h>

@class NSMutableDictionary, NSString;

@interface VNWarningRecorder : NSObject <VNWarningRecorder> {

	NSMutableDictionary* _warnings;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)warnings;
-(void)recordWarning:(id)arg1 value:(id)arg2 ;
-(void)setWarnings:(id)arg1 ;
-(id)valueForWarning:(id)arg1 ;
-(BOOL)hasWarnings;
-(void)recordWarnings:(id)arg1 ;
-(id)init;
@end
