/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, DEExtensionHostContext, NSExtension;

@interface DEExtension : NSObject {

	BOOL _isLoggingEnabled;
	BOOL _allowUserAttachmentSelection;
	NSString* _attachmentsName;
	NSString* _identifier;
	DEExtensionHostContext* _context;
	NSString* _loggingConsent;
	NSExtension* _extension;

}

@property (nonatomic,retain) NSExtension * extension;                        //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain) NSString * attachmentsName;                     //@synthesize attachmentsName=_attachmentsName - In the implementation block
@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) DEExtensionHostContext * context;               //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL isLoggingEnabled;                          //@synthesize isLoggingEnabled=_isLoggingEnabled - In the implementation block
@property (nonatomic,retain) NSString * loggingConsent;                      //@synthesize loggingConsent=_loggingConsent - In the implementation block
@property (assign,nonatomic) BOOL allowUserAttachmentSelection;              //@synthesize allowUserAttachmentSelection=_allowUserAttachmentSelection - In the implementation block
-(void)attachmentListWithHandler:(/*^block*/id)arg1 ;
-(void)endUsingExtension;
-(void)performWithHostContext:(/*^block*/id)arg1 ;
-(id)initWithNSExtension:(id)arg1 ;
-(void)setAttachmentsName:(NSString *)arg1 ;
-(void)setIsLoggingEnabled:(BOOL)arg1 ;
-(NSString *)loggingConsent;
-(void)setLoggingConsent:(NSString *)arg1 ;
-(BOOL)allowUserAttachmentSelection;
-(void)setAllowUserAttachmentSelection:(BOOL)arg1 ;
-(BOOL)isLoggingEnabled;
-(void)attachmentsForParameters:(id)arg1 andHandler:(/*^block*/id)arg2 ;
-(NSString *)attachmentsName;
-(NSString *)identifier;
-(id)description;
-(void)setContext:(DEExtensionHostContext *)arg1 ;
-(DEExtensionHostContext *)context;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(NSExtension *)extension;
@end

