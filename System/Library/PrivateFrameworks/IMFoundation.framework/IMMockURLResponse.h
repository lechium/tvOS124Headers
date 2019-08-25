/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSHTTPURLResponse, NSData, NSString;

@interface IMMockURLResponse : NSObject <NSSecureCoding> {

	NSHTTPURLResponse* _response;
	NSData* _data;
	NSString* _requestBodyKeyPath;
	NSString* _mockID;

}

@property (retain) NSHTTPURLResponse * response;              //@synthesize response=_response - In the implementation block
@property (retain) NSData * data;                             //@synthesize data=_data - In the implementation block
@property (copy) NSString * requestBodyKeyPath;               //@synthesize requestBodyKeyPath=_requestBodyKeyPath - In the implementation block
@property (copy) NSString * mockID;                           //@synthesize mockID=_mockID - In the implementation block
+(id)objectFromPlist:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)setResponse:(NSHTTPURLResponse *)arg1 ;
-(NSString *)requestBodyKeyPath;
-(NSString *)mockID;
-(void)setRequestBodyKeyPath:(NSString *)arg1 ;
-(void)setMockID:(NSString *)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSHTTPURLResponse *)response;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
@end

