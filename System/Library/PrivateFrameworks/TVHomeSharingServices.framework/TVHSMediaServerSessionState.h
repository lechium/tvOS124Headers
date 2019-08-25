/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/TVHomeSharingServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingServices/TVHomeSharingServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TVHSMediaServerProtocolVersion;

@interface TVHSMediaServerSessionState : NSObject <NSSecureCoding, NSCopying> {

	BOOL _importingDPAPDatabase;
	unsigned _DAAPRevision;
	unsigned _DAAPDatabaseID;
	unsigned _DAAPBasePlaylistID;
	unsigned _DPAPRevision;
	unsigned _DPAPDatabaseID;
	unsigned _DPAPBasePlaylistID;
	TVHSMediaServerProtocolVersion* _protocolVersion;
	unsigned long long _DAAPDatabasePersistentID;
	unsigned long long _DAAPBasePlaylistPersistentID;
	unsigned long long _DPAPDatabasePersistentID;
	unsigned long long _DPAPBasePlaylistPersistentID;

}

@property (nonatomic,copy) TVHSMediaServerProtocolVersion * protocolVersion;                         //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (assign,nonatomic) unsigned DAAPRevision;                                                  //@synthesize DAAPRevision=_DAAPRevision - In the implementation block
@property (assign,nonatomic) unsigned DAAPDatabaseID;                                                //@synthesize DAAPDatabaseID=_DAAPDatabaseID - In the implementation block
@property (assign,nonatomic) unsigned long long DAAPDatabasePersistentID;                            //@synthesize DAAPDatabasePersistentID=_DAAPDatabasePersistentID - In the implementation block
@property (assign,nonatomic) unsigned DAAPBasePlaylistID;                                            //@synthesize DAAPBasePlaylistID=_DAAPBasePlaylistID - In the implementation block
@property (assign,nonatomic) unsigned long long DAAPBasePlaylistPersistentID;                        //@synthesize DAAPBasePlaylistPersistentID=_DAAPBasePlaylistPersistentID - In the implementation block
@property (assign,nonatomic) unsigned DPAPRevision;                                                  //@synthesize DPAPRevision=_DPAPRevision - In the implementation block
@property (assign,nonatomic) unsigned DPAPDatabaseID;                                                //@synthesize DPAPDatabaseID=_DPAPDatabaseID - In the implementation block
@property (assign,nonatomic) unsigned long long DPAPDatabasePersistentID;                            //@synthesize DPAPDatabasePersistentID=_DPAPDatabasePersistentID - In the implementation block
@property (assign,nonatomic) unsigned DPAPBasePlaylistID;                                            //@synthesize DPAPBasePlaylistID=_DPAPBasePlaylistID - In the implementation block
@property (assign,nonatomic) unsigned long long DPAPBasePlaylistPersistentID;                        //@synthesize DPAPBasePlaylistPersistentID=_DPAPBasePlaylistPersistentID - In the implementation block
@property (assign,getter=isImportingDPAPDatabase,nonatomic) BOOL importingDPAPDatabase;              //@synthesize importingDPAPDatabase=_importingDPAPDatabase - In the implementation block
@property (nonatomic,readonly) unsigned long long photoLibraryState; 
+(BOOL)supportsSecureCoding;
-(void)setProtocolVersion:(TVHSMediaServerProtocolVersion *)arg1 ;
-(TVHSMediaServerProtocolVersion *)protocolVersion;
-(unsigned long long)photoLibraryState;
-(unsigned)DAAPDatabaseID;
-(unsigned)DPAPDatabaseID;
-(void)setDAAPDatabaseID:(unsigned)arg1 ;
-(void)setDPAPDatabaseID:(unsigned)arg1 ;
-(unsigned)DAAPBasePlaylistID;
-(unsigned)DAAPRevision;
-(unsigned)DPAPBasePlaylistID;
-(unsigned)DPAPRevision;
-(BOOL)isImportingDPAPDatabase;
-(unsigned long long)DAAPDatabasePersistentID;
-(unsigned long long)DAAPBasePlaylistPersistentID;
-(unsigned long long)DPAPDatabasePersistentID;
-(unsigned long long)DPAPBasePlaylistPersistentID;
-(void)setDAAPRevision:(unsigned)arg1 ;
-(void)setDAAPDatabasePersistentID:(unsigned long long)arg1 ;
-(void)setDAAPBasePlaylistID:(unsigned)arg1 ;
-(void)setDAAPBasePlaylistPersistentID:(unsigned long long)arg1 ;
-(void)setDPAPRevision:(unsigned)arg1 ;
-(void)setDPAPDatabasePersistentID:(unsigned long long)arg1 ;
-(void)setDPAPBasePlaylistID:(unsigned)arg1 ;
-(void)setDPAPBasePlaylistPersistentID:(unsigned long long)arg1 ;
-(void)setImportingDPAPDatabase:(BOOL)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_init;
@end

