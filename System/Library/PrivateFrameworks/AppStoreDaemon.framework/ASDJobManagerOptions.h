/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ASDJobManagerOptions : NSObject <NSCopying, NSSecureCoding> {

	BOOL _shouldFilterExternalOriginatedDownloads;
	BOOL _shouldReportDownloadProgress;
	NSString* _persistenceIdentifier;

}

@property (assign,nonatomic) BOOL shouldReportDownloadProgress;                         //@synthesize shouldReportDownloadProgress=_shouldReportDownloadProgress - In the implementation block
@property (nonatomic,copy) NSString * persistenceIdentifier;                            //@synthesize persistenceIdentifier=_persistenceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL shouldFilterExternalOriginatedDownloads;              //@synthesize shouldFilterExternalOriginatedDownloads=_shouldFilterExternalOriginatedDownloads - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)shouldFilterExternalOriginatedDownloads;
-(NSString *)persistenceIdentifier;
-(void)setPersistenceIdentifier:(NSString *)arg1 ;
-(void)setShouldFilterExternalOriginatedDownloads:(BOOL)arg1 ;
-(BOOL)shouldReportDownloadProgress;
-(void)setShouldReportDownloadProgress:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

