/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _PFRefCountableValue : NSObject <NSCopying> {

	long long _refCount;
	id _value;

}

@property (nonatomic,readonly) id value; 
-(long long)incrementRefCount;
-(long long)decrementRefCount;
-(id)initWithValue:(id)arg1 ;
-(long long)refCount;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)value;
@end
