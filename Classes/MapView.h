//
//  MapViewController.h
//
//


#import <MapKit/MapKit.h>
#import "RegexKitLite.h"
#import "Place.h"
#import "PlaceMark.h"
#import "PlaceStore.h"
typedef enum
{
    travelDriving=1,
    travelWalking=2,
    travelBicykling=3,
}TravelModeType;


@interface MapView : UIView<MKMapViewDelegate> {

	MKMapView* mapView;
	UIImageView* routeView;
	
	NSArray* routes;
    BOOL canRouting;
	
	UIColor* lineColor;
    PlaceStore* placeStore;
    NSString* strTimeToPlace;
    NSNumber *timeToPlace;
    TravelModeType travelMode;
}

@property (nonatomic, retain) UIColor* lineColor;
@property(nonatomic, retain) MKMapView *mapView;
@property(nonatomic, retain) PlaceStore* placeStore;
@property(nonatomic, readonly) BOOL canRouting;

-(void) showRouteFrom: (Place*) f to:(Place*) t;
-(void) calculateTimeFrom:(Place *) f to: (Place *) t;

-(PlaceMark *) PlaceMarkByPlace:(Place *) p;


@end
