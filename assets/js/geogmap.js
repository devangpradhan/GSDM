    // Initialize and add the map
    function initMap() {
      // The location of India
      const india = { lat: 20.5937, lng: 78.9629 };
      // The map, centered at India
      const map = new google.maps.Map(document.getElementById("weathermap"), {
        zoom: 5, // Adjust the zoom level as needed
        center: india,
      });
      // Add a marker at the location
      const marker = new google.maps.Marker({
        position: india,
        map: map,
      });
    }