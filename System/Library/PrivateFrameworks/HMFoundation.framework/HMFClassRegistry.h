/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMFUnfairLock, NSMutableDictionary;

@interface HMFClassRegistry : HMFObject {

	HMFUnfairLock* _lock;
	NSMutableDictionary* _classes;
	Class _defaultClass;

}

@property (readonly) Class defaultClass;              //@synthesize defaultClass=_defaultClass - In the implementation block
-(id)initWithDefaultClass:(Class)arg1 ;
-(Class)defaultClass;
-(Class)classForKey:(id)arg1 ;
-(void)setClass:(Class)arg1 forKey:(id)arg2 ;
-(id)init;
@end

