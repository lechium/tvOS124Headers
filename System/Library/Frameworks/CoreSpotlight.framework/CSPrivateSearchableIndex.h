/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CSSearchableIndex.h>

@class NSString, CSIndexConnection;

@interface CSPrivateSearchableIndex : CSSearchableIndex {

	BOOL _attemptedIndexPathResolution;
	NSString* _resolvedIndexPath;
	NSString* _indexPath;
	CSIndexConnection* _savedConnection;

}

@property (assign) BOOL attemptedIndexPathResolution;                          //@synthesize attemptedIndexPathResolution=_attemptedIndexPathResolution - In the implementation block
@property (nonatomic,retain) NSString * resolvedIndexPath;                     //@synthesize resolvedIndexPath=_resolvedIndexPath - In the implementation block
@property (nonatomic,retain) NSString * indexPath;                             //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,retain) CSIndexConnection * savedConnection;              //@synthesize savedConnection=_savedConnection - In the implementation block
+(id)defaultSearchableIndex;
-(id)xpc_dictionary_for_command:(const char*)arg1 requiresInitialization:(BOOL)arg2 ;
-(void)setAttemptedIndexPathResolution:(BOOL)arg1 ;
-(NSString *)resolvedIndexPath;
-(void)setSavedConnection:(CSIndexConnection *)arg1 ;
-(BOOL)attemptedIndexPathResolution;
-(void)setResolvedIndexPath:(NSString *)arg1 ;
-(CSIndexConnection *)savedConnection;
-(void)dealloc;
-(NSString *)indexPath;
-(void)setIndexPath:(NSString *)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(id)connection;
@end
