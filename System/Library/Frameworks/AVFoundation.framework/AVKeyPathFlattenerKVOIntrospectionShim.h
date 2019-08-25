/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVKVOIntrospection.h>
#import <AVFoundation/AVCallbackCancellation.h>

@protocol AVKVOIntrospectionAVCallbackCancellation;
@class NSObject, NSString;

@interface AVKeyPathFlattenerKVOIntrospectionShim : NSObject <AVKVOIntrospection, AVCallbackCancellation> {

	NSObject* _observedObject;
	id<AVKVOIntrospection><AVCallbackCancellation> _realNotifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject * observedObject; 
-(void)cancelCallbacks;
-(id)initWithObservedObject:(id)arg1 realNotifier:(id)arg2 ;
-(NSObject *)observedObject;
-(void)dealloc;
@end
