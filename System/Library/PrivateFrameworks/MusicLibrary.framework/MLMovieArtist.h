/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSNumber;

@interface MLMovieArtist : NSObject <NSCopying> {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,copy) NSString * artistName; 
@property (nonatomic,copy) NSNumber * ITunesStoreIdentifier; 
-(void)setITunesStoreIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)ITunesStoreIdentifier;
-(void)setArtistName:(NSString *)arg1 ;
-(void)_setValue:(id)arg1 forKey:(id)arg2 ;
-(void)_setValueCopy:(id)arg1 forKey:(id)arg2 ;
-(id)initWithMovieArtistDictionary:(id)arg1 ;
-(id)copyMovieArtistDictionary;
-(NSString *)artistName;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
