/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NSGenerationToken : NSObject <NSSecureCoding> {

	long long _origin;
	long long _generation;
	NSString* _storeIdentifier;

}
+(BOOL)supportsSecureCoding;
-(id)initForStore:(id)arg1 origin:(long long)arg2 generation:(long long)arg3 ;
-(id)initWithStoreIdentifier:(id)arg1 origin:(long long)arg2 generation:(long long)arg3 ;
-(BOOL)isReferencingStore:(id)arg1 ;
-(long long)generation;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(long long)origin;
-(id)storeIdentifier;
@end
