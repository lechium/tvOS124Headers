/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class _MRContentItemProtobuf, _MRPlaybackQueueRequestProtobuf;

@interface MRContentItemRequest : NSObject <NSSecureCoding> {

	_MRContentItemProtobuf* _item;
	_MRPlaybackQueueRequestProtobuf* _request;

}

@property (nonatomic,retain) _MRContentItemProtobuf * item;                          //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) _MRPlaybackQueueRequestProtobuf * request;              //@synthesize request=_request - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRequest:(_MRPlaybackQueueRequestProtobuf *)arg1 ;
-(id)initWithItem:(id)arg1 request:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setItem:(_MRContentItemProtobuf *)arg1 ;
-(_MRContentItemProtobuf *)item;
-(_MRPlaybackQueueRequestProtobuf *)request;
@end
