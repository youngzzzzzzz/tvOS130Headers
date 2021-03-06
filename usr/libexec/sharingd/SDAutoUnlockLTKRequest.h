/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:54 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/sharingd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <sharingd/sharingd-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <sharingd/NSCopying.h>

@class NSString, NSData;

@interface SDAutoUnlockLTKRequest : PBRequest <NSCopying> {

	NSString* _localID;
	NSData* _ltk;
	NSData* _ltkID;
	NSString* _remoteDeviceID;
	unsigned _version;
	BOOL _checkViewState;
	BOOL _needsLTK;
	BOOL _remoteNeedsLTK;
	SCD_Struct_SD13 _has;

}

@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                       //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasLocalID; 
@property (nonatomic,retain) NSString * localID;                     //@synthesize localID=_localID - In the implementation block
@property (nonatomic,readonly) BOOL hasLtk; 
@property (nonatomic,retain) NSData * ltk;                           //@synthesize ltk=_ltk - In the implementation block
@property (nonatomic,readonly) BOOL hasLtkID; 
@property (nonatomic,retain) NSData * ltkID;                         //@synthesize ltkID=_ltkID - In the implementation block
@property (assign,nonatomic) BOOL hasCheckViewState; 
@property (assign,nonatomic) BOOL checkViewState;                    //@synthesize checkViewState=_checkViewState - In the implementation block
@property (nonatomic,readonly) BOOL hasRemoteDeviceID; 
@property (nonatomic,retain) NSString * remoteDeviceID;              //@synthesize remoteDeviceID=_remoteDeviceID - In the implementation block
@property (assign,nonatomic) BOOL hasNeedsLTK; 
@property (assign,nonatomic) BOOL needsLTK;                          //@synthesize needsLTK=_needsLTK - In the implementation block
@property (assign,nonatomic) BOOL hasRemoteNeedsLTK; 
@property (assign,nonatomic) BOOL remoteNeedsLTK;                    //@synthesize remoteNeedsLTK=_remoteNeedsLTK - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned)version;
-(void)setVersion:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(NSString *)localID;
-(void)setLocalID:(NSString *)arg1 ;
-(void)setLtk:(NSData *)arg1 ;
-(void)setLtkID:(NSData *)arg1 ;
-(void)setRemoteDeviceID:(NSString *)arg1 ;
-(BOOL)hasLocalID;
-(BOOL)hasLtk;
-(BOOL)hasLtkID;
-(void)setCheckViewState:(BOOL)arg1 ;
-(void)setHasCheckViewState:(BOOL)arg1 ;
-(BOOL)hasCheckViewState;
-(BOOL)hasRemoteDeviceID;
-(void)setNeedsLTK:(BOOL)arg1 ;
-(void)setHasNeedsLTK:(BOOL)arg1 ;
-(BOOL)hasNeedsLTK;
-(void)setRemoteNeedsLTK:(BOOL)arg1 ;
-(void)setHasRemoteNeedsLTK:(BOOL)arg1 ;
-(BOOL)hasRemoteNeedsLTK;
-(NSData *)ltk;
-(NSData *)ltkID;
-(BOOL)checkViewState;
-(NSString *)remoteDeviceID;
-(BOOL)needsLTK;
-(BOOL)remoteNeedsLTK;
@end

