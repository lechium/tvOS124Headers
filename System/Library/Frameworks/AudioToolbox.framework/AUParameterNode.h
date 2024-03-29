/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AudioToolbox/AudioToolbox-Structs.h>
@class NSString, AUParameterGroup;

@interface AUParameterNode : NSObject {

	NSString* _identifier;
	NSString* _displayName;
	unsigned long long _indexInGroup;
	AUParameterGroup* _parentNode;
	AUObserverList* _observerList;
	/*^block*/id _impl_implementorValueObserver;
	/*^block*/id _impl_implementorValueProvider;
	/*^block*/id _impl_implementorStringFromValueCallback;
	/*^block*/id _impl_implementorValueFromStringCallback;
	/*^block*/id _impl_implementorDisplayNameWithLengthCallback;

}

@property (nonatomic,copy) id implementorValueObserver; 
@property (nonatomic,copy) id implementorValueProvider; 
@property (nonatomic,copy) id implementorStringFromValueCallback; 
@property (nonatomic,copy) id implementorValueFromStringCallback; 
@property (nonatomic,copy) id implementorDisplayNameWithLengthCallback; 
@property (assign,nonatomic) unsigned long long indexInGroup;                             //@synthesize indexInGroup=_indexInGroup - In the implementation block
@property (assign,nonatomic,__weak) AUParameterGroup * parentNode;                        //@synthesize parentNode=_parentNode - In the implementation block
@property (assign,nonatomic) AUObserverList* observerList;                                //@synthesize observerList=_observerList - In the implementation block
@property (nonatomic,copy) id impl_implementorValueObserver;                              //@synthesize impl_implementorValueObserver=_impl_implementorValueObserver - In the implementation block
@property (nonatomic,copy) id impl_implementorValueProvider;                              //@synthesize impl_implementorValueProvider=_impl_implementorValueProvider - In the implementation block
@property (nonatomic,copy) id impl_implementorStringFromValueCallback;                    //@synthesize impl_implementorStringFromValueCallback=_impl_implementorStringFromValueCallback - In the implementation block
@property (nonatomic,copy) id impl_implementorValueFromStringCallback;                    //@synthesize impl_implementorValueFromStringCallback=_impl_implementorValueFromStringCallback - In the implementation block
@property (nonatomic,copy) id impl_implementorDisplayNameWithLengthCallback;              //@synthesize impl_implementorDisplayNameWithLengthCallback=_impl_implementorDisplayNameWithLengthCallback - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * keyPath; 
@property (nonatomic,copy,readonly) NSString * displayName;                               //@synthesize displayName=_displayName - In the implementation block
-(void)setParentNode:(AUParameterGroup *)arg1 ;
-(void)_serialize:(CASerializer*)arg1 ;
-(void)_deserialize:(CADeserializer*)arg1 ;
-(void)_walkTree:(int)arg1 callback:(/*^block*/id)arg2 ;
-(id)_rootParent;
-(void)_observersChanged:(BOOL)arg1 deltaCount:(int)arg2 ;
-(void*)_addRecObserver:(/*^block*/id)arg1 autoObserver:(/*^block*/id)arg2 ;
-(id)implementorDisplayNameWithLengthCallback;
-(id)initWithID:(id)arg1 name:(id)arg2 ;
-(id)copyNodeWithOffset:(unsigned long long)arg1 ;
-(void*)tokenByAddingParameterObserver:(/*^block*/id)arg1 ;
-(void*)tokenByAddingParameterRecordingObserver:(/*^block*/id)arg1 ;
-(void*)tokenByAddingParameterAutomationObserver:(/*^block*/id)arg1 ;
-(void)removeParameterObserver:(void*)arg1 ;
-(id)displayNameWithLength:(long long)arg1 ;
-(unsigned long long)indexInGroup;
-(void)setIndexInGroup:(unsigned long long)arg1 ;
-(AUObserverList*)observerList;
-(void)setObserverList:(AUObserverList*)arg1 ;
-(id)impl_implementorValueObserver;
-(void)setImpl_implementorValueObserver:(id)arg1 ;
-(id)impl_implementorValueProvider;
-(void)setImpl_implementorValueProvider:(id)arg1 ;
-(id)impl_implementorStringFromValueCallback;
-(void)setImpl_implementorStringFromValueCallback:(id)arg1 ;
-(id)impl_implementorValueFromStringCallback;
-(void)setImpl_implementorValueFromStringCallback:(id)arg1 ;
-(id)impl_implementorDisplayNameWithLengthCallback;
-(void)setImpl_implementorDisplayNameWithLengthCallback:(id)arg1 ;
-(id)implementorValueObserver;
-(void)setImplementorValueObserver:(id)arg1 ;
-(id)implementorValueProvider;
-(void)setImplementorValueProvider:(id)arg1 ;
-(id)implementorStringFromValueCallback;
-(void)setImplementorStringFromValueCallback:(id)arg1 ;
-(id)implementorValueFromStringCallback;
-(void)setImplementorValueFromStringCallback:(id)arg1 ;
-(void)setImplementorDisplayNameWithLengthCallback:(id)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(id)description;
-(NSString *)keyPath;
-(BOOL)isGroup;
-(AUParameterGroup *)parentNode;
-(NSString *)displayName;
@end

