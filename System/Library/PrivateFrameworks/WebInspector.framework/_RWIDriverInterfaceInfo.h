/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, _RWIRelayClientConnection;

@interface _RWIDriverInterfaceInfo : NSObject {

	BOOL _isActive;
	NSString* _identifier;
	NSString* _name;
	_RWIRelayClientConnection* _connection;

}

@property (nonatomic,copy) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) _RWIRelayClientConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) BOOL isActive;                                       //@synthesize isActive=_isActive - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(_RWIRelayClientConnection *)connection;
-(BOOL)isActive;
-(id)dictionaryRepresentation;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 connection:(id)arg3 ;
-(BOOL)updateDriverState:(BOOL)arg1 ;
@end
