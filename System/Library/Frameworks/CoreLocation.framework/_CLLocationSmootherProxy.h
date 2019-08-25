/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationSmootherClientInterface.h>

@protocol OS_dispatch_queue, CLLocationSmootherDelegate;
@class NSObject, NSXPCConnection, CLLocationSmoother, NSString;

@interface _CLLocationSmootherProxy : NSObject <CLLocationSmootherClientInterface> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	id<CLLocationSmootherDelegate> _delegate;
	CLLocationSmoother* _locationManagerSmoother;

}

@property (nonatomic,retain) NSXPCConnection * connection;                              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) id<CLLocationSmootherDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CLLocationSmoother * locationManagerSmoother;              //@synthesize locationManagerSmoother=_locationManagerSmoother - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLocationManagerSmoother:(CLLocationSmoother *)arg1 ;
-(CLLocationSmoother *)locationManagerSmoother;
-(void)didSmoothLocations:(id)arg1 ofType:(id)arg2 ;
-(id)initWithCLLocationSmoother:(id)arg1 ;
-(void)createConnection;
-(void)dealloc;
-(void)setDelegate:(id<CLLocationSmootherDelegate>)arg1 ;
-(id<CLLocationSmootherDelegate>)delegate;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end
