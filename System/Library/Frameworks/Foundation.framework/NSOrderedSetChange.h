/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface NSOrderedSetChange : NSObject

@property (readonly) unsigned long long changeType; 
@property (readonly) unsigned long long sourceIndex; 
@property (readonly) unsigned long long destinationIndex; 
@property (readonly) id value; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)initWithType:(unsigned long long)arg1 sourceIndex:(unsigned long long)arg2 destinationIndex:(unsigned long long)arg3 value:(id)arg4 ;
-(unsigned long long)destinationIndex;
-(unsigned long long)sourceIndex;
-(unsigned long long)changeType;
-(id)value;
@end

