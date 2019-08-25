/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BRFileObjectID.h>

@interface BRDocObjectID : BRFileObjectID {

	unsigned _docID;

}
+(BOOL)supportsSecureCoding;
-(BOOL)isDocumentID;
-(id)documentID;
-(unsigned long long)rawID;
-(id)initWithDocID:(unsigned)arg1 ;
-(id)initWithDocIDNumber:(id)arg1 ;
-(id)asString;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

