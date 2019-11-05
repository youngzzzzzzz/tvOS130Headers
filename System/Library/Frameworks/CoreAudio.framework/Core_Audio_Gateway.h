/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreAudio/CoreAudio-Structs.h>
#import <CoreAudio/NSXPCListenerDelegate.h>

@class NSXPCListener, NSXPCListenerEndpoint, NSString;

@interface Core_Audio_Gateway : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	NSXPCListenerEndpoint* _endpoint;
	shared_ptr<HAL::Client::ObjectIDMap>* _clientObjectMap;

}

@property (nonatomic,retain) NSXPCListenerEndpoint * endpoint;                                     //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                                             //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) shared_ptr<HAL::Client::ObjectIDMap>* clientObjectMap;              //@synthesize clientObjectMap=_clientObjectMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(NSXPCListenerEndpoint *)endpoint;
-(void)setEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(id)initWithObjectMap:(shared_ptr<HAL::Client::ObjectIDMap>*)arg1 ;
-(void)handle_server_disconnected;
-(void)handle_server_reconnected;
-(BOOL)has_endpoint;
-(void)create_endpoint;
-(void)destroy_endpoint;
-(shared_ptr<HAL::Client::ObjectIDMap>*)clientObjectMap;
@end
