/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFPseudoRandomFunction;
@class NSData;

@interface SFPBKDF2Operation_Ivars : NSObject {

	long long iterationCount;
	id<SFPseudoRandomFunction> pseudoRandomFunction;
	NSData* salt;

}
@end

