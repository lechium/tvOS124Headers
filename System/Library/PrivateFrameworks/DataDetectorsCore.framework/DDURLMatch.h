/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
@class NSString;

@interface DDURLMatch : NSObject {

	NSRange _range;
	NSString* _url;

}
-(id)initWithRange:(NSRange)arg1 url:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(long long)compare:(id)arg1 ;
-(id)url;
-(NSRange)range;
@end

