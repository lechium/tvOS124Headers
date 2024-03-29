/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSAttributedString, NSData, NSURL, NSString, NSDictionary, NSDate, NSArray, DDScannerResult, IMBalloonPluginDataSource;

@interface IMPluginPayload : NSObject <NSSecureCoding, NSCopying> {

	BOOL _update;
	BOOL _sticker;
	BOOL _shouldExpire;
	BOOL _isPlayed;
	BOOL _isFromMe;
	NSAttributedString* _text;
	NSData* _data;
	NSURL* _url;
	NSString* _breadcrumbText;
	NSString* _statusText;
	NSDictionary* _userInfo;
	NSString* _messageGUID;
	NSDate* _time;
	NSString* _associatedMessageGUID;
	NSString* _pluginBundleID;
	NSArray* _consumedSessionPayloads;
	NSString* _pluginSessionGUID;
	DDScannerResult* _dataDetectedResult;
	NSArray* _attachments;
	IMBalloonPluginDataSource* _datasource;
	NSString* _sender;

}

@property (nonatomic,retain) NSDate * time;                                              //@synthesize time=_time - In the implementation block
@property (nonatomic,retain) NSArray * consumedSessionPayloads;                          //@synthesize consumedSessionPayloads=_consumedSessionPayloads - In the implementation block
@property (nonatomic,retain) NSString * messageGUID;                                     //@synthesize messageGUID=_messageGUID - In the implementation block
@property (nonatomic,retain) NSString * associatedMessageGUID;                           //@synthesize associatedMessageGUID=_associatedMessageGUID - In the implementation block
@property (nonatomic,retain) NSString * pluginSessionGUID;                               //@synthesize pluginSessionGUID=_pluginSessionGUID - In the implementation block
@property (nonatomic,retain) NSString * pluginBundleID;                                  //@synthesize pluginBundleID=_pluginBundleID - In the implementation block
@property (nonatomic,retain) DDScannerResult * dataDetectedResult;                       //@synthesize dataDetectedResult=_dataDetectedResult - In the implementation block
@property (nonatomic,retain) NSArray * attachments;                                      //@synthesize attachments=_attachments - In the implementation block
@property (assign,nonatomic,__weak) IMBalloonPluginDataSource * datasource;              //@synthesize datasource=_datasource - In the implementation block
@property (assign,nonatomic) BOOL isFromMe;                                              //@synthesize isFromMe=_isFromMe - In the implementation block
@property (assign,nonatomic) BOOL isPlayed;                                              //@synthesize isPlayed=_isPlayed - In the implementation block
@property (nonatomic,readonly) BOOL shouldHideAttachments; 
@property (nonatomic,copy) NSString * sender;                                            //@synthesize sender=_sender - In the implementation block
@property (nonatomic,retain) NSAttributedString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSData * data;                                              //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSURL * url;                                                //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * breadcrumbText;                                  //@synthesize breadcrumbText=_breadcrumbText - In the implementation block
@property (nonatomic,retain) NSString * statusText;                                      //@synthesize statusText=_statusText - In the implementation block
@property (assign,getter=isUpdate,nonatomic) BOOL update;                                //@synthesize update=_update - In the implementation block
@property (assign,getter=isSticker,nonatomic) BOOL sticker;                              //@synthesize sticker=_sticker - In the implementation block
@property (assign,nonatomic) BOOL shouldExpire;                                          //@synthesize shouldExpire=_shouldExpire - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                                    //@synthesize userInfo=_userInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)time;
-(void)setTime:(NSDate *)arg1 ;
-(id)initWithMessage:(id)arg1 ;
-(NSString *)messageGUID;
-(DDScannerResult *)dataDetectedResult;
-(NSString *)pluginBundleID;
-(NSArray *)consumedSessionPayloads;
-(NSString *)pluginSessionGUID;
-(void)setMessageGUID:(NSString *)arg1 ;
-(void)setPluginSessionGUID:(NSString *)arg1 ;
-(BOOL)shouldExpire;
-(void)setShouldExpire:(BOOL)arg1 ;
-(BOOL)isFromMe;
-(void)setIsFromMe:(BOOL)arg1 ;
-(BOOL)isPlayed;
-(void)setIsPlayed:(BOOL)arg1 ;
-(void)setDatasource:(IMBalloonPluginDataSource *)arg1 ;
-(void)setDataDetectedResult:(DDScannerResult *)arg1 ;
-(void)setPluginBundleID:(NSString *)arg1 ;
-(id)initWithMessageItem:(id)arg1 ;
-(NSString *)breadcrumbText;
-(BOOL)isSticker;
-(NSString *)statusText;
-(NSString *)associatedMessageGUID;
-(BOOL)isEqualToPluginPayload:(id)arg1 ;
-(void)setBreadcrumbText:(NSString *)arg1 ;
-(void)setStatusText:(NSString *)arg1 ;
-(void)setUpdate:(BOOL)arg1 ;
-(void)setAssociatedMessageGUID:(NSString *)arg1 ;
-(void)setSticker:(BOOL)arg1 ;
-(IMBalloonPluginDataSource *)datasource;
-(void)addAttachmentsFromFileTransferGUIDs:(id)arg1 ;
-(BOOL)shouldHideAttachments;
-(void)setConsumedSessionPayloads:(NSArray *)arg1 ;
-(BOOL)isUpdate;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)attachments;
-(NSDictionary *)userInfo;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setAttachments:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)text;
-(NSString *)sender;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setSender:(NSString *)arg1 ;
@end

