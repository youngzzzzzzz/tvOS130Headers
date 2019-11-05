/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MIDINetworkSession : NSObject {

	void* _imp;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled; 
@property (nonatomic,readonly) unsigned long long networkPort; 
@property (nonatomic,readonly) NSString * networkName; 
@property (nonatomic,readonly) NSString * localName; 
@property (assign,nonatomic) unsigned long long connectionPolicy; 
+(id)defaultSession;
-(id)init;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(NSString *)localName;
-(id)connections;
-(BOOL)removeConnection:(id)arg1 ;
-(BOOL)addConnection:(id)arg1 ;
-(id)contacts;
-(BOOL)addContact:(id)arg1 ;
-(NSString *)networkName;
-(unsigned long long)connectionPolicy;
-(void)setConnectionPolicy:(unsigned long long)arg1 ;
-(void)setStateToEntity;
-(void)updateFromEntity;
-(void)refreshBonjourName;
-(BOOL)addOrRemoveConnection:(id)arg1 add:(BOOL)arg2 ;
-(unsigned long long)networkPort;
-(BOOL)removeContact:(id)arg1 ;
-(void)sessionChanged;
-(void)contactsChanged;
-(unsigned)sourceEndpoint;
-(unsigned)destinationEndpoint;
@end
