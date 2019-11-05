/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKCustomFeatureDataSource <NSObject>
@required
-(void)removeObserver:(id)arg1;
-(void)addObserver:(id)arg1;
-(unsigned char)sceneID;
-(BOOL)isClusteringEnabled;
-(unsigned char)sceneState;
-(id)annotationsInMapRect:(SCD_Struct_MK1)arg1;
-(id)clusterStyleAttributes;
-(void)getClusterImageTextForClusterFeatureCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3;
-(void)getClusterAnnotationTextForClusterFeatureCount:(unsigned long long)arg1 text:(id*)arg2 locale:(id*)arg3;

@end
