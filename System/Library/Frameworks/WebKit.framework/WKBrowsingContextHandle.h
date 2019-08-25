/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface WKBrowsingContextHandle : NSObject <NSSecureCoding> {

	unsigned long long _pageID;

}

@property (getter=_pageID,nonatomic,readonly) unsigned long long pageID;              //@synthesize pageID=_pageID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_initWithPageID:(unsigned long long)arg1 ;
-(unsigned long long)_pageID;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
@end
