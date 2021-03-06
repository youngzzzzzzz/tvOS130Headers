/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <MediaRemote/NSCopying.h>

@class _MRGameControllerPropertiesProtobuf;

@interface _MRRegisterGameControllerMessageProtobuf : PBCodable <NSCopying> {

	_MRGameControllerPropertiesProtobuf* _properties;

}

@property (nonatomic,readonly) BOOL hasProperties; 
@property (nonatomic,retain) _MRGameControllerPropertiesProtobuf * properties;              //@synthesize properties=_properties - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(_MRGameControllerPropertiesProtobuf *)properties;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setProperties:(_MRGameControllerPropertiesProtobuf *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasProperties;
@end

