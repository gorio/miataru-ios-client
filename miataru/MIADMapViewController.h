//
//  MIADMapViewController.h
//  Miataru
//
//  Created by Daniel Kirstenpfad on 27.09.13.
//  Copyright (c) 2013 Miataru. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@class KnownDevice;

@interface MIADMapViewController : UIViewController <NSURLConnectionDelegate,MKMapViewDelegate>

@property (strong) NSMutableData *responseData;

@property (weak, nonatomic) IBOutlet MKMapView *DevicesMapView;

@property (weak, nonatomic) IBOutlet MKMapView *AllDevicesMapView;
- (MKAnnotationView *)mapView:(MKMapView *)mapView viewForAnnotation:(id <MKAnnotation>)annotation;

- (void)mapView:(MKMapView *)mapView didAddAnnotationViews:(NSArray *)views;

@end
