/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, IKViewElement;

@interface IKServiceContext : NSObject {

	NSDictionary* _contextDictionary;
	IKViewElement* _element;

}

@property (nonatomic,copy,readonly) NSDictionary * contextDictionary;              //@synthesize contextDictionary=_contextDictionary - In the implementation block
@property (nonatomic,readonly) IKViewElement * element;                            //@synthesize element=_element - In the implementation block
-(NSDictionary *)contextDictionary;
-(id)initWithContextDictionary:(id)arg1 element:(id)arg2 ;
-(IKViewElement *)element;
@end

