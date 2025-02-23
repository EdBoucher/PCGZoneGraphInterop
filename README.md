This plugin contains 4 PCG nodes designed to help interoperability with ZoneGraph. 

1. Create ZoneGraph creates a Zoneshape component of type bezier using the input PCG points

2.  Create ZoneShape is currently editor only but will create an intersection component for the zonegraph. This node wants all 4 points indicating the lane entry points for the intersection and for them all to contain a "crossing transform" attribute ot type transform it can use to orient to the centre of the intersection. It will use the lane profile and lane size information to add extra points on the polygon being created and output. (This is a finicky node and could be imrpoved)

3.  Get ZoneGaphSettings will extract information from the project settings on the zonegraph plugin showing the lanes, lane width etc.

4.  Get Zone Graph Data (a.k.a Zone Graph to Points) will just create PCG spline data based on existing ZoneShapeComponents in the world
