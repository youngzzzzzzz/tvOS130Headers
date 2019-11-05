/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:43 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/locationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <locationd/locationd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <locationd/NSCopying.h>

@interface ALCLMotionActivity : PBCodable <NSCopying> {

	double _estExitTime;
	double _startTime;
	double _timestamp;
	int _confidence;
	int _exitState;
	int _mountedConfidence;
	int _mountedState;
	float _tilt;
	int _type;
	BOOL _isStanding;
	BOOL _isVehicleConnected;
	SCD_Struct_AL6 _has;

}

@property (assign,nonatomic) int type;                                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasConfidence; 
@property (assign,nonatomic) int confidence;                          //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) BOOL hasMountedState; 
@property (assign,nonatomic) int mountedState;                        //@synthesize mountedState=_mountedState - In the implementation block
@property (assign,nonatomic) BOOL hasMountedConfidence; 
@property (assign,nonatomic) int mountedConfidence;                   //@synthesize mountedConfidence=_mountedConfidence - In the implementation block
@property (assign,nonatomic) BOOL hasIsStanding; 
@property (assign,nonatomic) BOOL isStanding;                         //@synthesize isStanding=_isStanding - In the implementation block
@property (assign,nonatomic) BOOL hasTilt; 
@property (assign,nonatomic) float tilt;                              //@synthesize tilt=_tilt - In the implementation block
@property (assign,nonatomic) double timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasExitState; 
@property (assign,nonatomic) int exitState;                           //@synthesize exitState=_exitState - In the implementation block
@property (assign,nonatomic) BOOL hasEstExitTime; 
@property (assign,nonatomic) double estExitTime;                      //@synthesize estExitTime=_estExitTime - In the implementation block
@property (assign,nonatomic) BOOL hasStartTime; 
@property (assign,nonatomic) double startTime;                        //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) BOOL hasIsVehicleConnected; 
@property (assign,nonatomic) BOOL isVehicleConnected;                 //@synthesize isVehicleConnected=_isVehicleConnected - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)type;
-(void)setType:(int)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(id)dictionaryRepresentation;
-(int)confidence;
-(double)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setConfidence:(int)arg1 ;
-(void)setHasConfidence:(BOOL)arg1 ;
-(BOOL)hasConfidence;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setHasStartTime:(BOOL)arg1 ;
-(BOOL)hasStartTime;
-(BOOL)isVehicleConnected;
-(float)tilt;
-(id)confidenceAsString:(int)arg1 ;
-(int)StringAsConfidence:(id)arg1 ;
-(int)exitState;
-(void)setTilt:(float)arg1 ;
-(int)mountedConfidence;
-(void)setMountedConfidence:(int)arg1 ;
-(void)setHasMountedConfidence:(BOOL)arg1 ;
-(BOOL)hasMountedConfidence;
-(id)mountedConfidenceAsString:(int)arg1 ;
-(int)StringAsMountedConfidence:(id)arg1 ;
-(void)setExitState:(int)arg1 ;
-(void)setHasExitState:(BOOL)arg1 ;
-(BOOL)hasExitState;
-(id)exitStateAsString:(int)arg1 ;
-(int)StringAsExitState:(id)arg1 ;
-(int)mountedState;
-(void)setHasMountedState:(BOOL)arg1 ;
-(BOOL)hasMountedState;
-(id)mountedStateAsString:(int)arg1 ;
-(int)StringAsMountedState:(id)arg1 ;
-(void)setHasIsStanding:(BOOL)arg1 ;
-(BOOL)hasIsStanding;
-(void)setHasTilt:(BOOL)arg1 ;
-(BOOL)hasTilt;
-(void)setHasEstExitTime:(BOOL)arg1 ;
-(BOOL)hasEstExitTime;
-(void)setIsVehicleConnected:(BOOL)arg1 ;
-(void)setHasIsVehicleConnected:(BOOL)arg1 ;
-(BOOL)hasIsVehicleConnected;
-(double)estExitTime;
-(void)setMountedState:(int)arg1 ;
-(void)setEstExitTime:(double)arg1 ;
-(BOOL)isStanding;
-(void)setIsStanding:(BOOL)arg1 ;
@end
