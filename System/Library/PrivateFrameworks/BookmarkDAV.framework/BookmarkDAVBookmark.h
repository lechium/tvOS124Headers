/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CoreDAVLeafDataPayload.h>
#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSURL, NSData, NSString, NSArray, NSMutableString, NSDictionary, CoreDAVErrorItem;

@interface BookmarkDAVBookmark : NSObject <CoreDAVLeafDataPayload, NSXMLParserDelegate> {

	NSURL* _bookmarkURL;
	NSURL* _serverID;
	NSURL* _sourceURL;
	NSURL* _destinationURL;
	NSString* _name;
	NSString* _syncKey;
	NSMutableString* _appleAttributeString;
	NSDictionary* _appleAttributes;
	int _parseState;
	int _ignoreLevel;
	CoreDAVErrorItem* _bulkUploadErrorItem;

}

@property (nonatomic,retain,readonly) NSURL * bookmarkURL;                         //@synthesize bookmarkURL=_bookmarkURL - In the implementation block
@property (nonatomic,retain,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * appleAttributes;              //@synthesize appleAttributes=_appleAttributes - In the implementation block
@property (nonatomic,retain) NSURL * sourceURL;                                    //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,retain) NSURL * destinationURL;                               //@synthesize destinationURL=_destinationURL - In the implementation block
@property (nonatomic,retain) CoreDAVErrorItem * bulkUploadErrorItem;               //@synthesize bulkUploadErrorItem=_bulkUploadErrorItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSURL * serverID;                                     //@synthesize serverID=_serverID - In the implementation block
@property (nonatomic,readonly) NSData * dataPayload; 
@property (nonatomic,readonly) NSString * syncKey;                                 //@synthesize syncKey=_syncKey - In the implementation block
@property (nonatomic,readonly) NSArray * childrenOrder; 
-(void)setServerID:(NSURL *)arg1 ;
-(NSURL *)serverID;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 foundCDATA:(id)arg2 ;
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSURL *)sourceURL;
-(NSString *)syncKey;
-(NSData *)dataPayload;
-(NSURL *)destinationURL;
-(void)setDestinationURL:(NSURL *)arg1 ;
-(id)initWithURL:(id)arg1 eTag:(id)arg2 dataPayload:(id)arg3 inContainerWithURL:(id)arg4 withAccountInfoProvider:(id)arg5 ;
-(void)setPropertiesFromXBEL:(id)arg1 ;
-(id)initWithBookmarkURL:(id)arg1 serverID:(id)arg2 name:(id)arg3 syncKey:(id)arg4 appleAttributes:(id)arg5 ;
-(NSURL *)bookmarkURL;
-(NSDictionary *)appleAttributes;
-(CoreDAVErrorItem *)bulkUploadErrorItem;
-(void)setBulkUploadErrorItem:(CoreDAVErrorItem *)arg1 ;
-(void)dealloc;
-(NSString *)name;
@end

