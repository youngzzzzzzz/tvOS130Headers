/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray;

@interface SALocalSearchMapViewport : SADomainObject

@property (assign,nonatomic) double eastLongitude; 
@property (assign,nonatomic) double northLatitude; 
@property (assign,nonatomic) double southLatitude; 
@property (assign,nonatomic) double timeInSecondsSinceViewportChanged; 
@property (assign,nonatomic) double timeInSecondsSinceViewportEnteredForeground; 
@property (nonatomic,copy) NSArray * vertices; 
@property (assign,nonatomic) double westLongitude; 
+(id)mapViewport;
+(id)mapViewportWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(double)eastLongitude;
-(void)setEastLongitude:(double)arg1 ;
-(double)northLatitude;
-(void)setNorthLatitude:(double)arg1 ;
-(double)southLatitude;
-(void)setSouthLatitude:(double)arg1 ;
-(double)timeInSecondsSinceViewportChanged;
-(void)setTimeInSecondsSinceViewportChanged:(double)arg1 ;
-(double)timeInSecondsSinceViewportEnteredForeground;
-(void)setTimeInSecondsSinceViewportEnteredForeground:(double)arg1 ;
-(NSArray *)vertices;
-(void)setVertices:(NSArray *)arg1 ;
-(double)westLongitude;
-(void)setWestLongitude:(double)arg1 ;
@end

