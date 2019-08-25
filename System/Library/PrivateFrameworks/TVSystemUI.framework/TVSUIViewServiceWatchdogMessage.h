/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSystemUI/TVSUIViewServiceMessageCodable.h>

@class NSString;

@interface TVSUIViewServiceWatchdogMessage : NSObject <TVSUIViewServiceMessageCodable> {

	double _timeout;

}

@property (nonatomic,readonly) double timeout;                      //@synthesize timeout=_timeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timeout;
-(id)initWithViewTimeout:(double)arg1 ;
-(id)initFromItems:(id)arg1 ;
-(void)encodeToItems:(id)arg1 ;
@end
