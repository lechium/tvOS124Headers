/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSArray;

@interface PSIObject : NSObject <NSCopying> {

	NSMutableDictionary* _synonymsByOriginalWord;
	NSString* _uuid;
	NSArray* _tokens;

}

@property (setter=setUUID:,nonatomic,copy) NSString * uuid;              //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain,readonly) NSArray * tokens;                  //@synthesize tokens=_tokens - In the implementation block
-(void)addSynonym:(id)arg1 category:(short)arg2 originalContentString:(id)arg3 ;
-(void)addContentString:(id)arg1 category:(short)arg2 owningCategory:(short)arg3 ;
-(void)addContentString:(id)arg1 identifier:(id)arg2 category:(short)arg3 owningCategory:(short)arg4 ;
-(void)addIdentifier:(id)arg1 category:(short)arg2 owningCategory:(short)arg3 ;
-(void)reverse;
-(id)initForReverse;
-(id)_initForCopy:(BOOL)arg1 ;
-(void)enumerateSynonymsForOriginalContentString:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)description;
-(NSString *)uuid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)clear;
-(void)setUUID:(id)arg1 ;
-(NSArray *)tokens;
-(id)initWithUUID:(id)arg1 ;
@end

